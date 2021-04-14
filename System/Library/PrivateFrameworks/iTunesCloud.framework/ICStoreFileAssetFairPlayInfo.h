/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData;

@interface ICStoreFileAssetFairPlayInfo : NSObject <NSCopying> {

	NSDictionary* _responseSinfDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * responseSinfDictionary;                    //@synthesize responseSinfDictionary=_responseSinfDictionary - In the implementation block
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSData * dpInfoData; 
@property (nonatomic,copy,readonly) NSData * pinfData; 
@property (nonatomic,copy,readonly) NSData * sinfData; 
@property (nonatomic,copy,readonly) NSData * sinf2Data; 
@property (nonatomic,copy,readonly) NSDictionary * purchaseBundleSinfDictionary; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)identifier;
-(NSData *)sinfData;
-(id)initWithResponseSinfDictionary:(id)arg1 ;
-(NSData *)dpInfoData;
-(NSData *)pinfData;
-(NSData *)sinf2Data;
-(NSDictionary *)purchaseBundleSinfDictionary;
-(NSDictionary *)responseSinfDictionary;
@end
