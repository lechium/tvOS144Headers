/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/__TVExtensionWireProtocol.h>

@class NSArray, LSApplicationProxy, LSPlugInKitProxy, NSLock, NSXPCConnection, BKSProcessAssertion;

@interface TVExtension : NSObject <__TVExtensionWireProtocol> {

	int __style;
	id __principalObject;
	NSArray* __protocols;
	LSApplicationProxy* __appProxy;
	LSPlugInKitProxy* __pluginProxy;
	NSLock* __lock;
	NSXPCConnection* __connection;
	BKSProcessAssertion* __procAssertion;

}

@property (retain) id _principalObject;                               //@synthesize _principalObject=__principalObject - In the implementation block
@property (copy) NSArray * _protocols;                                //@synthesize _protocols=__protocols - In the implementation block
@property (assign) int _style;                                        //@synthesize _style=__style - In the implementation block
@property (retain) LSApplicationProxy * _appProxy;                    //@synthesize _appProxy=__appProxy - In the implementation block
@property (retain) LSPlugInKitProxy * _pluginProxy;                   //@synthesize _pluginProxy=__pluginProxy - In the implementation block
@property (retain) NSLock * _lock;                                    //@synthesize _lock=__lock - In the implementation block
@property (retain) NSXPCConnection * _connection;                     //@synthesize _connection=__connection - In the implementation block
@property (retain) BKSProcessAssertion * _procAssertion;              //@synthesize _procAssertion=__procAssertion - In the implementation block
+(void)load;
+(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
+(id)serviceExtension;
+(void)setPrincipalObjectClass:(Class)arg1 ;
+(BOOL)pluginHasTopShelfExtension:(id)arg1 ;
+(id)extensionWithPluginProxy:(id)arg1 appProxy:(id)arg2 isLegacy:(BOOL)arg3 protocol:(id)arg4 ;
+(id)allInstalledExtensionsOfType:(id)arg1 forAppIdentifier:(id)arg2 ;
+(id)bestExtensionWithAppIdentifier:(id)arg1 protocol:(id)arg2 ;
+(id)topShelfProviderExtensionForAppIdentifier:(id)arg1 ;
+(id)extensionForContentIdentifier:(id)arg1 ;
+(BOOL)appHasBinaryExtension:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(NSLock *)_lock;
-(id)identifier;
-(NSXPCConnection *)_connection;
-(id)_principalObject;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(int)_style;
-(void)shutdown;
-(NSArray *)_protocols;
-(id)applicationIdentifier;
-(void)set_style:(int)arg1 ;
-(LSApplicationProxy *)_appProxy;
-(void)set_lock:(NSLock *)arg1 ;
-(void)fetchTopShelfInfoWithResultHandler:(/*^block*/id)arg1 ;
-(void)reportItemSelected:(id)arg1 ;
-(void)reportItemPlayed:(id)arg1 ;
-(LSPlugInKitProxy *)_pluginProxy;
-(void)_xpc_checkAdoptedProtocolsWithResultHandler:(/*^block*/id)arg1 ;
-(void)_xpc_topShelf_fetchContentItemsWithResultHandler:(/*^block*/id)arg1 ;
-(void)_xpc_topShelf_reportItemSelected:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_xpc_topShelf_reportItemPlayed:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)supportsPublicProtocol:(id)arg1 ;
-(id)containingApplicationProxy;
-(void)fetchSupportedProtocolsWithResultHandler:(/*^block*/id)arg1 ;
-(void)set_principalObject:(id)arg1 ;
-(void)set_protocols:(NSArray *)arg1 ;
-(void)set_appProxy:(LSApplicationProxy *)arg1 ;
-(void)set_pluginProxy:(LSPlugInKitProxy *)arg1 ;
-(BKSProcessAssertion *)_procAssertion;
-(void)set_procAssertion:(BKSProcessAssertion *)arg1 ;
@end

