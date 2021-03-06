/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor;

@interface PXSnapStripViewIndicatorInfo : NSObject {

	BOOL _disabled;
	UIColor* _color;
	double _offset;
	unsigned long long _style;

}

@property (nonatomic,readonly) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double offset;                         //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL disabled;                           //@synthesize disabled=_disabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(unsigned long long)style;
-(double)offset;
-(UIColor *)color;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(id)initWithOffset:(double)arg1 color:(id)arg2 style:(unsigned long long)arg3 ;
-(BOOL)isEqualToIndicatorInfo:(id)arg1 ;
@end

