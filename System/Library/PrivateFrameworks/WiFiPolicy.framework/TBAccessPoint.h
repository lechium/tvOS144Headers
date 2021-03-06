/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol TBAccessPoint <NSObject,TBScorable>
@property (nonatomic,readonly) NSString * BSSID; 
@property (nonatomic,readonly) double latitude; 
@property (nonatomic,readonly) double longitude; 
@property (getter=isEdge,nonatomic,readonly) BOOL edge; 
@property (getter=isTCPGood,nonatomic,readonly) BOOL TCPGood; 
@required
-(id)dictionaryRepresentation;
-(double)latitude;
-(double)longitude;
-(NSString *)BSSID;
-(BOOL)isEdge;
-(BOOL)isTCPGood;

@end

