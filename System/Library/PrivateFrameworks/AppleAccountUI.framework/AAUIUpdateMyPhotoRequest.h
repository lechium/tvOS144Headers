/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AARequest.h>

@class ACAccount, UIImage, NSValue;

@interface AAUIUpdateMyPhotoRequest : AARequest {

	ACAccount* _account;
	UIImage* _photo;
	NSValue* _cropRect;

}
+(id)_downsampleImage:(id)arg1 fromStartingQuality:(double)arg2 toEndingQuality:(double)arg3 increment:(double)arg4 maxLength:(unsigned long long)arg5 ;
+(id)_fullScreen2ImageFromImage:(id)arg1 cropRect:(id)arg2 fullScreenCropRect:(id*)arg3 ;
-(id)urlString;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 photo:(id)arg2 cropRect:(id)arg3 ;
@end

