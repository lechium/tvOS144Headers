/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface PKPaymentHeroImageModel : NSObject {

	NSURL* _url;
	NSString* _imageSha;

}

@property (nonatomic,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * imageSha;              //@synthesize imageSha=_imageSha - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)imageSha;
@end

