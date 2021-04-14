/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Features/HID.feature/HID
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AccessoryHIDClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, AccessoryHIDClient, NSObject, NSString;

@interface ACCFeaturePluginHIDProvider : NSObject <AccessoryHIDClientProtocol> {

	NSMutableArray* _descriptorUUIDs;
	AccessoryHIDClient* _hidClient;
	NSObject*<OS_dispatch_queue> _hidProviderLock;

}

@property (nonatomic,retain) NSMutableArray * descriptorUUIDs;                          //@synthesize descriptorUUIDs=_descriptorUUIDs - In the implementation block
@property (retain) AccessoryHIDClient * hidClient;                                      //@synthesize hidClient=_hidClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> hidProviderLock;              //@synthesize hidProviderLock=_hidProviderLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHIDProvider;
-(id)init;
-(void)dealloc;
-(id)createHIDDescriptor:(id)arg1 ;
-(BOOL)deleteHIDDescriptor:(id)arg1 ;
-(BOOL)processInReport:(id)arg1 forUUID:(id)arg2 ;
-(BOOL)processGetReportResponse:(id)arg1 reportType:(unsigned char)arg2 reportID:(unsigned char)arg3 forUUID:(id)arg4 ;
-(void)startHIDProvider;
-(void)stopHIDProvider;
-(NSObject*<OS_dispatch_queue>)hidProviderLock;
-(NSMutableArray *)descriptorUUIDs;
-(void)setDescriptorUUIDs:(NSMutableArray *)arg1 ;
-(void)setHidClient:(AccessoryHIDClient *)arg1 ;
-(void)setHidProviderLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AccessoryHIDClient *)hidClient;
-(id)getDescriptor:(id)arg1 ;
@end

