/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEExtensionAppProxyProviderContext.h>
#import <libobjc.A.dylib/NEExtensionDNSProxyProviderProtocol.h>

@class NSString;

@interface NEExtensionDNSProxyProviderContext : NEExtensionAppProxyProviderContext <NEExtensionDNSProxyProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setSystemDNSSettings:(id)arg1 ;
-(id)extensionPoint;
-(Class)requiredProviderSuperClass;
@end
