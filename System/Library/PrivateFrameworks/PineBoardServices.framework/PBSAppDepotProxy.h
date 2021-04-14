/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PBSAppInfoControllerObserver.h>
#import <libobjc.A.dylib/PBSAppDepotProxyProtocol.h>

@class NSDictionary, NSArray, NSString;

@interface PBSAppDepotProxy : NSObject <PBSAppInfoControllerObserver, PBSAppDepotProxyProtocol> {

	NSDictionary* _appState;
	NSArray* _provisionedAppIdentifiers;

}

@property (copy,readonly) NSDictionary * appState;                          //@synthesize appState=_appState - In the implementation block
@property (copy,readonly) NSArray * provisionedAppIdentifiers;              //@synthesize provisionedAppIdentifiers=_provisionedAppIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(NSDictionary *)appState;
-(void)appInfoController:(id)arg1 didUpdate:(id)arg2 ;
-(id)appStateForAppIdentifier:(id)arg1 ;
-(NSArray *)provisionedAppIdentifiers;
-(void)_queue_setProvisionedAppIdentifiers:(id)arg1 ;
@end

