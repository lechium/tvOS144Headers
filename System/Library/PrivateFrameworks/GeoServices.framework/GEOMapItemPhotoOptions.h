/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GEOMapItemPhotoOptions : NSObject {

	BOOL _allowSmaller;
	long long _preferredCropStyle;
	long long _preferredFormat;

}

@property (nonatomic,readonly) BOOL allowSmaller;                         //@synthesize allowSmaller=_allowSmaller - In the implementation block
@property (nonatomic,readonly) long long preferredCropStyle;              //@synthesize preferredCropStyle=_preferredCropStyle - In the implementation block
@property (nonatomic,readonly) long long preferredFormat;                 //@synthesize preferredFormat=_preferredFormat - In the implementation block
+(id)defaultPhotoOptionsWithAllowSmaller:(BOOL)arg1 ;
+(id)defaultPhotoOptionsWithCropStyle:(long long)arg1 ;
-(id)initWithAllowSmaller:(BOOL)arg1 cropStyle:(long long)arg2 format:(long long)arg3 ;
-(BOOL)allowSmaller;
-(long long)preferredCropStyle;
-(long long)preferredFormat;
@end

