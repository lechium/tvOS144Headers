/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UISlider.h>

@class UIColor;

@interface PSSegmentableSlider : UISlider {

	UIColor* _trackMarkersColor;
	BOOL _segmented;
	BOOL _locksToSegment;
	BOOL _snapsToSegment;
	unsigned long long _segmentCount;

}

@property (assign,getter=isSegmented,nonatomic) BOOL segmented;              //@synthesize segmented=_segmented - In the implementation block
@property (assign,nonatomic) BOOL locksToSegment;                            //@synthesize locksToSegment=_locksToSegment - In the implementation block
@property (assign,nonatomic) BOOL snapsToSegment;                            //@synthesize snapsToSegment=_snapsToSegment - In the implementation block
@property (assign,nonatomic) unsigned long long segmentCount;                //@synthesize segmentCount=_segmentCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSegmented:(BOOL)arg1 ;
-(void)setLocksToSegment:(BOOL)arg1 ;
-(void)setSnapsToSegment:(BOOL)arg1 ;
-(void)setSegmentCount:(unsigned long long)arg1 ;
-(void)sliderTapped:(id)arg1 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(BOOL)isSegmented;
-(BOOL)locksToSegment;
-(BOOL)snapsToSegment;
-(unsigned long long)segmentCount;
@end
