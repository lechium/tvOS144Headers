/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSURL;

@interface AMSMediaVideo : NSObject {

	NSDictionary* _videoDictionary;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSDictionary * videoDictionary;              //@synthesize videoDictionary=_videoDictionary - In the implementation block
-(id)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)URL;
-(NSDictionary *)videoDictionary;
@end

