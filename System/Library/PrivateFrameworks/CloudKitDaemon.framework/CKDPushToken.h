/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface CKDPushToken : NSObject {

	NSString* _apsEnvironmentString;
	NSData* _apsToken;

}

@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (nonatomic,retain) NSData * apsToken;                            //@synthesize apsToken=_apsToken - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)apsToken;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(NSString *)apsEnvironmentString;
-(void)setApsToken:(NSData *)arg1 ;
@end
