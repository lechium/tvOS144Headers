/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface MKVKImageSourceCalculationParameters : NSObject {

	NSArray* _imageSourceKeys;
	double _scale;

}

@property (nonatomic,copy,readonly) NSArray * imageSourceKeys;              //@synthesize imageSourceKeys=_imageSourceKeys - In the implementation block
@property (nonatomic,readonly) double scale;                                //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(id)initWithImageSourceKeys:(id)arg1 scale:(double)arg2 ;
-(NSArray *)imageSourceKeys;
@end

