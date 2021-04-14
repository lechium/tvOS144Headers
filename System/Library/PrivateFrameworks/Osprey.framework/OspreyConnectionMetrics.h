/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLSessionTaskTransactionMetrics, NSString, NSURL;

@interface OspreyConnectionMetrics : NSObject {

	NSURLSessionTaskTransactionMetrics* _metrics;
	unsigned long long _connectionState;

}

@property (nonatomic,readonly) unsigned long long connectionState;                    //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,readonly) double fetchStartToDomainLookupStartTime; 
@property (nonatomic,readonly) double dnsResolutionTime; 
@property (nonatomic,readonly) double connectionEstablishmentTime; 
@property (nonatomic,readonly) double tcpConnectTime; 
@property (nonatomic,readonly) double secureConnectionTime; 
@property (nonatomic,readonly) double fetchStartToFirstByteTime; 
@property (nonatomic,readonly) NSString * connectionMethod; 
@property (nonatomic,readonly) NSURL * requestURL; 
-(NSString *)connectionMethod;
-(NSURL *)requestURL;
-(unsigned long long)connectionState;
-(id)initWithMetrics:(id)arg1 ;
-(double)dnsResolutionTime;
-(double)connectionEstablishmentTime;
-(double)tcpConnectTime;
-(double)secureConnectionTime;
-(double)fetchStartToDomainLookupStartTime;
-(double)fetchStartToFirstByteTime;
@end

