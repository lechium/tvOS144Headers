/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface ICRadioStationProviderResource : NSObject {

	NSURL* _url;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)bundleIdentifier;
-(NSURL *)url;
-(id)initWithRadioStationProviderResourceDictionary:(id)arg1 ;
@end

