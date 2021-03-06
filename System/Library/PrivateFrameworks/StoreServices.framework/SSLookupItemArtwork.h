/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSURL;

@interface SSLookupItemArtwork : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) NSURL * URL; 
-(void)dealloc;
-(NSURL *)URL;
-(long long)width;
-(long long)height;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 format:(id)arg3 ;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 forColorKind:(id)arg5 ;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 ;
@end

