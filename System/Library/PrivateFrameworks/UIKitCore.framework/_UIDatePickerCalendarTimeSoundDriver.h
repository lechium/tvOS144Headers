/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UICoordinateSpace;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIDatePickerCalendarTimeSoundDriver : NSObject {

	SCD_Struct_UI30 _flags;
	long long _highlightedValue;
	long long _selectedValue;
	id<UICoordinateSpace> _coordinateSpace;

}

@property (assign,nonatomic) long long highlightedValue;                                //@synthesize highlightedValue=_highlightedValue - In the implementation block
@property (assign,nonatomic) long long selectedValue;                                   //@synthesize selectedValue=_selectedValue - In the implementation block
@property (assign,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
-(id)init;
-(void)warmUp;
-(id<UICoordinateSpace>)coordinateSpace;
-(long long)selectedValue;
-(void)setSelectedValue:(long long)arg1 ;
-(void)setHighlightedValue:(long long)arg1 ;
-(void)playHighlightSound;
-(void)playSnappingSound;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(void)updateWithHighlightedValue:(long long)arg1 ;
-(void)updateWithSnapped;
-(void)performWithoutSounds:(/*^block*/id)arg1 ;
-(void)coolDown;
-(long long)highlightedValue;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
@end

