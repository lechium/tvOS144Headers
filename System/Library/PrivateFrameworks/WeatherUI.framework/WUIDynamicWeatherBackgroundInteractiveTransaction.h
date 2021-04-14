/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, CALayer;

@interface WUIDynamicWeatherBackgroundInteractiveTransaction : NSObject {

	double _progress;
	NSArray* _layers;
	CALayer* _toLayer;
	long long _swipeDirection;

}

@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSArray * layers;                      //@synthesize layers=_layers - In the implementation block
@property (assign,nonatomic) CALayer * toLayer;                     //@synthesize toLayer=_toLayer - In the implementation block
@property (assign,nonatomic) long long swipeDirection;              //@synthesize swipeDirection=_swipeDirection - In the implementation block
-(double)progress;
-(NSArray *)layers;
-(void)setProgress:(double)arg1 ;
-(void)setLayers:(NSArray *)arg1 ;
-(CALayer *)toLayer;
-(void)setToLayer:(CALayer *)arg1 ;
-(long long)swipeDirection;
-(void)setSwipeDirection:(long long)arg1 ;
@end

