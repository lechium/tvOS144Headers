/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKDiagnosticRemoteContext.h>
#import <libobjc.A.dylib/DKResponder.h>

@class NSXPCConnection, NSString;

@interface DKDiagnosticContext : NSExtensionContext <DKDiagnosticRemoteContext, DKResponder> {

	BOOL _isXPC;
	NSXPCConnection* _xpcConnection;
	id _xpcPrincipalObject;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL isXPC;                                   //@synthesize isXPC=_isXPC - In the implementation block
@property (nonatomic,retain) id xpcPrincipalObject;                        //@synthesize xpcPrincipalObject=_xpcPrincipalObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)initWithConnection:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setIsXPC:(BOOL)arg1 ;
-(BOOL)isXPC;
-(void)completeWithDiagnosticResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)xpcPrincipalObject;
-(void)startRemoteDiagnosticWithDiagnosticParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelRemoteDiagnosticWithCompletion:(/*^block*/id)arg1 ;
-(id)_getRemoteProxyAndSetUpHandlers;
-(id)_helperPrincipalObject;
-(void)setXpcPrincipalObject:(id)arg1 ;
-(id)_helperConnnection;
-(void)getAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showUI:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)enableVolumeHUD:(BOOL)arg1 ;
-(void)requestPluginReloadOnFinishWithCompletion:(/*^block*/id)arg1 ;
@end

