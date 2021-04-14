//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UACornerActionManagerHandler.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface UABestAppSuggestionController : UACornerActionManagerHandler <NSXPCListenerDelegate>
{
    _Bool _disableEntitlementsCheck;	// 8 = 0x8
    NSXPCListener *_bestAppsListener;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000059a0
@property(retain) NSXPCListener *bestAppsListener; // @synthesize bestAppsListener=_bestAppsListener;
@property _Bool disableEntitlementsCheck; // @synthesize disableEntitlementsCheck=_disableEntitlementsCheck;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100005554
- (_Bool)terminate;	// IMP=0x000000010000546c
- (_Bool)resume;	// IMP=0x0000000100005398
- (_Bool)suspend;	// IMP=0x00000001000052c4
- (id)initWithManager:(id)arg1 name:(id)arg2;	// IMP=0x0000000100005190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
