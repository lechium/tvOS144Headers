/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class NSMutableArray, NSArray, UILayoutGuide;

@interface _MKPlaceBusinessInfoRow : MKPlaceSectionRowView {

	BOOL _needToRecalculateWidth;
	unsigned long long _numberOfColumns;
	NSMutableArray* _labels;
	NSArray* _constraints;
	UILayoutGuide* _leftColumnGuide;
	UILayoutGuide* _rightColumnGuide;
	double _width;
	NSArray* _items;

}

@property (nonatomic,retain) NSArray * items;              //@synthesize items=_items - In the implementation block
-(NSArray *)items;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged;
-(void)_updateFontAndTextColor:(id)arg1 ;
-(void)_createConstraints;
@end

