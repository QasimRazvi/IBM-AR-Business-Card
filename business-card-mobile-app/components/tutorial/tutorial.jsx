import React, { useCallback, useState } from "react";
import { StyleSheet, Text, TouchableOpacity, View } from "react-native";
import Carousel, { Pagination } from "react-native-snap-carousel";

// Data should be provided in this format:
// const data = [{
//     text: '' ,
//     component: '',
// },
// {
//     text: '',
//     component: '',
// },
// ];

const Tutorial = (props) => {
  // passed `data`, `onContinue` function

  const [currItemIdx, setCurrItemIdx] = useState(0);
  const carouselRef = React.useRef(null);

  const renderItem = useCallback(
    ({ item, index }) => (
      // return (
      <View
        style={{
          flexDirection: "column",
          justifyContent: "space-evenly",
          backgroundColor: "white",
          //   alignSelf: "center",
          alignItems: "center",
          //   marginTop: "50%",
          width: "100%",
          height: "90%",
          padding: 30,
          borderRadius: 15,
        }}
      >
        {item.component}
        <Text style={{ color: "black" }}>{item.text}</Text>
      </View>
    ),
    []
  );

  return (
    <View style={{ flex: 1, backgroundColor: "black" }}>
      <View style={styles.container}>
        <Carousel
          layout={"stack"}
          data={props.data}
          renderItem={renderItem}
          sliderWidth={300}
          itemWidth={300}
          ref={carouselRef}
          layoutCardOffset={18}
          onSnapToItem={(index) => setCurrItemIdx(index)}
        />
        <Pagination
          dotsLength={props.data.length}
          activeDotIndex={currItemIdx}
          dotStyle={{
            width: 6,
            height: 6,
            borderRadius: 5,
            marginHorizontal: 0,
            backgroundColor: "white",
          }}
          carouselRef={carouselRef}
          inactiveDotOpacity={0.5}
          inactiveDotScale={0.8}
          tappableDots={true}
        />
      </View>
      <View
        style={{
          justifyContent: "flex-end",
          flexDirection: "row",
          padding: 20,
          marginRight: 20,
          marginLeft: 20,
        }}
      >
        {/* <CustomButton title={"Skip"} /> */}
        <TouchableOpacity onPress={props.onContinue}>
          {currItemIdx !== props.data.length - 1 ? (
            <Text style={{ color: "white" }}>Skip</Text>
          ) : (
            <Text style={{ color: "white" }}>Continue</Text>
          )}
        </TouchableOpacity>
        {/* <TouchableOpacity onPress={()=> this.Carousel.snap}>
          <Text style={{ color: "white" }}>Next</Text>
        </TouchableOpacity> */}
      </View>
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    // flexDirection: "row",
    justifyContent: "center",
    alignItems: "center",
    backgroundColor: "black",
  },
});

export default Tutorial;
