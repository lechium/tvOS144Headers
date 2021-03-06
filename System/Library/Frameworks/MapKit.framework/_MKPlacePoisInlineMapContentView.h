/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKPlaceInlineMapContentView.h>

@class _MKUILabel;

@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView {

	_MKUILabel* _storesLabel;
	_MKUILabel* _seeMoreLabel;
	BOOL _visible;

}

@property (assign,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hasTitle;
-(CGSize)intrinsicContentSize;
-(double)mapViewHeight;
-(BOOL)useImageView;
-(void)setLocationsNumber:(unsigned long long)arg1 ;
@end

