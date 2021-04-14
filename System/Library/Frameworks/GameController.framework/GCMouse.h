/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GCDeviceLegacy.h>
#import <libobjc.A.dylib/GCDevice.h>

@class NSArray, NSString, GCPhysicalInputProfile, GCController, GCMouseInput;

@interface GCMouse : NSObject <NSSecureCoding, GCDeviceLegacy, GCDevice> {

	GCController* _proxyController;

}

@property (nonatomic,readonly) GCController * proxyController; 
@property (nonatomic,retain) GCPhysicalInputProfile*<GCNamedProfile> profile; 
@property (nonatomic,retain) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSArray * hidServices; 
@property (nonatomic,readonly) unsigned service; 
@property (nonatomic,retain) NSString * physicalDeviceUniqueID; 
@property (nonatomic,readonly) unsigned long long deviceHash; 
@property (nonatomic,copy) NSString * debugName; 
@property (assign,getter=isForwarded,nonatomic) BOOL forwarded; 
@property (assign,getter=areAllHIDDevicesConnected,nonatomic) BOOL allHIDDevicesConnected; 
@property (assign,getter=isPublished,nonatomic) BOOL published; 
@property (nonatomic,readonly) NSString * productCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GCController * proxyController;                                            //@synthesize proxyController=_proxyController - In the implementation block
@property (nonatomic,readonly) GCMouseInput * mouseInput; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue; 
@property (nonatomic,copy,readonly) NSString * vendorName; 
@property (nonatomic,readonly) GCPhysicalInputProfile * physicalInputProfile; 
+(BOOL)supportsSecureCoding;
+(id)current;
+(id)mice;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(unsigned)service;
-(NSString *)vendorName;
-(NSString *)debugName;
-(void)setDebugName:(NSString *)arg1 ;
-(GCPhysicalInputProfile*<GCNamedProfile>)profile;
-(NSString *)physicalDeviceUniqueID;
-(unsigned)sampleRate;
-(void)setVendorName:(NSString *)arg1 ;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(void)setProfile:(GCPhysicalInputProfile*<GCNamedProfile>)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(unsigned long long)deviceHash;
-(BOOL)isPublished;
-(void)setPublished:(BOOL)arg1 ;
-(NSArray *)hidServices;
-(NSString *)productCategory;
-(GCPhysicalInputProfile *)physicalInputProfile;
-(GCMouseInput *)mouseInput;
-(void)setProxyController:(GCController *)arg1 ;
-(GCController *)proxyController;
-(void)setPhysicalDeviceUniqueID:(NSString *)arg1 ;
-(BOOL)isForwarded;
-(void)setForwarded:(BOOL)arg1 ;
-(BOOL)areAllHIDDevicesConnected;
-(void)setAllHIDDevicesConnected:(BOOL)arg1 ;
-(id)_legacy_vendorName;
-(id)_legacy_productCategory;
-(BOOL)_legacy_isEqualToController:(id)arg1 ;
-(id)_legacy_description;
-(void*)createInputBufferForDevice:(IOHIDDeviceRef)arg1 withSize:(unsigned long long)arg2 ;
-(void)addServiceRefsWithDevice:(id)arg1 ;
-(void)addServiceRef:(id)arg1 ;
-(BOOL)hasServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)removeServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)clearServiceRef;
-(BOOL)isATVRemote;
-(long long)_legacy_playerIndex;
-(void)_legacy_setPlayerIndex:(long long)arg1 ;
-(id)_legacy_physicalInputProfileName;
-(id)_legacy_physicalInputProfile;
-(id)initWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(BOOL)_legacy_isAttachedToDevice;
@end

