/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IDSIDQueryControllerDelegate.h>

@class NSMutableDictionary, NSString;

@interface CNCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate> {

	BOOL _isListeningToIDSServiceAvailability;
	BOOL _isListeningToIDSQueryController;
	NSMutableDictionary* _destinationStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCapabilitiesManager;
+(void)_setDefaultCapabilitiesManager:(id)arg1 ;
-(void)dealloc;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(BOOL)hasVibratorCapability;
-(void)_startListeningToIDSServiceAvailabilityIfNecessary;
-(BOOL)isConferencingEverGonnaBeAvailable;
-(void)_startListeningToIDSIDQueryControllerIfNecessary;
-(BOOL)_isAppAvailable:(id)arg1 ;
-(BOOL)isSensitiveUIAllowed;
-(BOOL)hasTelephonyCapability;
-(BOOL)hasCellularTelephonyCapability;
-(BOOL)hasCellularTelephonyHardwareCapability;
-(BOOL)hasCellularDataCapability;
-(BOOL)hasSMSCapability;
-(BOOL)hasForceTouchCapability;
-(BOOL)hasSiriCapability;
-(BOOL)hasCameraCapability;
-(BOOL)isEmailConfigured;
-(BOOL)isMMSConfigured;
-(BOOL)isMadridConfigured;
-(BOOL)isConferencingAvailable;
-(BOOL)hasPreviouslyConferencedWithID:(id)arg1 ;
-(id)conferenceURLForPhoneNumber:(id)arg1 ;
-(id)conferenceURLForDestinationID:(id)arg1 ;
-(void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2 ;
-(void)removeIDSServiceAvailabilityListener:(id)arg1 ;
-(BOOL)hasAdditionalTextTones;
-(BOOL)isTwitterServiceAvailable;
-(BOOL)isWeiboServiceAvailable;
-(BOOL)isFaceTimeAudioAvailable;
-(BOOL)isPhoneAppAvailable;
-(BOOL)isMailAppAvailable;
-(BOOL)isMessagesAppAvailable;
-(BOOL)isFaceTimeAppAvailable;
@end

