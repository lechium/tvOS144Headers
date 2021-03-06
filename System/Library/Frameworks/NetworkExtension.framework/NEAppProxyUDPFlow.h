/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyUDPFlow : NEAppProxyFlow {

	NWEndpoint* _localEndpoint;

}

@property (readonly) NWEndpoint * localEndpoint;              //@synthesize localEndpoint=_localEndpoint - In the implementation block
-(id)description;
-(NWEndpoint *)localEndpoint;
-(void)readDatagramsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)openWithLocalEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeDatagrams:(id)arg1 sentByEndpoints:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

