/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterExtensionProviderContext.h>

@protocol OS_nw_interpose;
@class NSObject, NSMutableDictionary;

@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext {

	os_unfair_lock_s _lock;
	NSObject*<OS_nw_interpose> _nw_interpose;
	NSMutableDictionary* _interposes;

}

@property (retain) NSObject*<OS_nw_interpose> nw_interpose;              //@synthesize nw_interpose=_nw_interpose - In the implementation block
@property (retain) NSMutableDictionary * interposes;                     //@synthesize interposes=_interposes - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(void)stopWithReason:(int)arg1 ;
-(id)extensionPoint;
-(Class)requiredProviderSuperClass;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)interposes;
-(void)setNw_interpose:(NSObject*<OS_nw_interpose>)arg1 ;
-(NSObject*<OS_nw_interpose>)nw_interpose;
-(void)setInterposes:(NSMutableDictionary *)arg1 ;
-(void)interposeHandleFlowEvent:(int)arg1 interface:(id)arg2 flow_id:(unsigned char)arg3 nexus_instance:(unsigned char)arg4 nexus_port:(unsigned)arg5 key:(void*)arg6 key_length:(unsigned)arg7 ;
-(BOOL)interposeClaimWithUUID:(id)arg1 ;
@end

