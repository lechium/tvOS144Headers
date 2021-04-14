//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSession.h"

#import "NEFlowDivertPluginDelegate-Protocol.h"

@class NEFlowDivertFileHandle;

@interface NESMFlowDivertSession : NESMVPNSession <NEFlowDivertPluginDelegate>
{
    struct __SCDynamicStore *_scstore;	// 8 = 0x8
    NEFlowDivertFileHandle *_flowDivertControlSocketHandle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000fd54
@property(retain) NEFlowDivertFileHandle *flowDivertControlSocketHandle; // @synthesize flowDivertControlSocketHandle=_flowDivertControlSocketHandle;
@property struct __SCDynamicStore *scstore; // @synthesize scstore=_scstore;
- (void)handleUserLogin;	// IMP=0x000000010000fbd0
- (void)handleInstalledAppsChanged;	// IMP=0x000000010000fa88
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x000000010000f9b4
- (_Bool)resetPerAppPolicy;	// IMP=0x000000010000f28c
- (void)pluginDidClearConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f238
- (void)plugin:(id)arg1 didSetConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000efec
- (id)pluginDidRequestFlowDivertControlSocket:(id)arg1;	// IMP=0x000000010000eef4
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x000000010000ec0c
- (void)uninstall;	// IMP=0x000000010000e978
- (void)install;	// IMP=0x000000010000e7fc
- (void)requestInstall;	// IMP=0x000000010000e710
- (void)setConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e0a0
- (_Bool)dictionary:(id)arg1 isEqualToDynamicStoreStateForKey:(id)arg2;	// IMP=0x000000010000e000
- (long long)agentPluginClass;	// IMP=0x000000010000dff8
- (void)dealloc;	// IMP=0x000000010000df94
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andPluginType:(id)arg4;	// IMP=0x000000010000de3c

@end

