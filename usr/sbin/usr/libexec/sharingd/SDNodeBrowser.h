//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDSharePointBrowserDelegate-Protocol.h"

@class CUCoalescer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SDClassroomBrowser, SDConnectedBrowser, SDDomainBrowser, SDManagedBrowser, SDRapportBrowser, SDSharePointBrowser, SDStatusMonitor, SDWorkgroupBrowser, SDXPCHelperConnection;
@protocol OS_dispatch_queue, OS_xpc_object, SDNodeBrowserDelegate;

__attribute__((visibility("hidden")))
@interface SDNodeBrowser : NSObject <SDSharePointBrowserDelegate>
{
    NSString *_kind;	// 8 = 0x8
    struct __SFNode *_parent;	// 16 = 0x10
    NSArray *_protocols;	// 24 = 0x18
    NSString *_protocol;	// 32 = 0x20
    long long _mode;	// 40 = 0x28
    int _error;	// 48 = 0x30
    _Bool _combineWorkgroups;	// 52 = 0x34
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CUCoalescer *_coalescer;	// 64 = 0x40
    SDStatusMonitor *_monitor;	// 72 = 0x48
    NSMutableSet *_odiskDomains;	// 80 = 0x50
    NSMutableSet *_airDropDomains;	// 88 = 0x58
    NSMutableSet *_bonjourDomains;	// 96 = 0x60
    NSMutableSet *_windowsWorkgroups;	// 104 = 0x68
    SDDomainBrowser *_domainBrowser;	// 112 = 0x70
    SDManagedBrowser *_managedBrowser;	// 120 = 0x78
    SDClassroomBrowser *_classroomBrowser;	// 128 = 0x80
    SDConnectedBrowser *_connectedBrowser;	// 136 = 0x88
    SDWorkgroupBrowser *_workgroupBrowser;	// 144 = 0x90
    SDSharePointBrowser *_sharePointBrowser;	// 152 = 0x98
    SDRapportBrowser *_rapportBrowser;	// 160 = 0xa0
    NSDictionary *_options;	// 168 = 0xa8
    NSMutableDictionary *_managedURLTable;	// 176 = 0xb0
    NSMutableDictionary *_commentHashTable;	// 184 = 0xb8
    NSMutableDictionary *_originalNodes;	// 192 = 0xc0
    NSString *_bundleID;	// 200 = 0xc8
    SDXPCHelperConnection *_helperConnection;	// 208 = 0xd0
    id <SDNodeBrowserDelegate> _delegate;	// 216 = 0xd8
    NSObject<OS_xpc_object> *_connection;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000001001495d8
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property __weak id <SDNodeBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)rangingMeasurementFromNode:(struct __SFNode *)arg1;	// IMP=0x00000001001494e4
- (id)mostRelevantMeasurementFromA:(id)arg1 andMeasurementB:(id)arg2;	// IMP=0x0000000100149358
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x00000001001492d4
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x00000001001492b8
@property(readonly, copy) NSArray *sidebarNodes;
@property(readonly, copy) NSArray *nodes;
- (id)nodesInternal:(_Bool)arg1;	// IMP=0x000000010014900c
- (void)appendAllNode:(id)arg1;	// IMP=0x0000000100148f74
- (void)stop;	// IMP=0x0000000100148e58
- (void)start;	// IMP=0x0000000100148c38
- (void)unloadRapport;	// IMP=0x0000000100148ba8
- (void)unloadSidebarPrefsMonitor;	// IMP=0x0000000100148b1c
- (void)unloadAirDrop;	// IMP=0x0000000100148960
- (void)unloadODisk;	// IMP=0x00000001001487a4
- (void)unloadClassroom;	// IMP=0x0000000100148714
- (void)unloadManaged;	// IMP=0x0000000100148684
- (void)unloadConnected;	// IMP=0x00000001001485f4
- (void)unloadSharePoints;	// IMP=0x000000010014859c
- (void)unloadWorkgroups;	// IMP=0x000000010014850c
- (void)unloadDomains;	// IMP=0x000000010014847c
- (void)unloadWindows;	// IMP=0x00000001001482c0
- (void)unloadBonjour;	// IMP=0x0000000100148104
- (id)airDropNodes;	// IMP=0x000000010014802c
- (id)odiskNodes;	// IMP=0x0000000100147fb0
- (id)sharePointNodes;	// IMP=0x0000000100147f4c
- (id)neighborhoodNodes;	// IMP=0x0000000100147ea4
- (id)sidebarNodesFromServerNodes:(id)arg1 nonServerCount:(unsigned long long)arg2 addAllNode:(_Bool *)arg3;	// IMP=0x0000000100147a5c
- (void)updateSelectionReasonInNodes:(id)arg1;	// IMP=0x0000000100147a58
- (void)addFakeRangingMeasurementIfAppropriateToNodesInCache:(id)arg1;	// IMP=0x0000000100147a54
- (void)addRapportChildrenFromCache:(id)arg1;	// IMP=0x00000001001478c8
- (void)addConnectedChildrenFromCache:(id)arg1;	// IMP=0x000000010014745c
- (void)addManagedChildrenFromCache:(id)arg1;	// IMP=0x000000010014719c
- (void)addClassroomChildrenFromCache:(id)arg1;	// IMP=0x000000010014700c
- (void)addWindowsChildrenFromCache:(id)arg1;	// IMP=0x0000000100146b4c
- (void)addBonjourChildrenFromCache:(id)arg1;	// IMP=0x00000001001466bc
- (void)copyOverBonjourInfo:(struct __SFNode *)arg1 source:(struct __SFNode *)arg2;	// IMP=0x000000010014653c
- (id)workgroupChildren;	// IMP=0x00000001001464d0
- (id)domainChildren;	// IMP=0x00000001001464b8
- (void)loadRapport;	// IMP=0x0000000100146334
- (void)loadSidebarPrefsMonitor;	// IMP=0x00000001001462a0
- (void)loadAirDrop;	// IMP=0x0000000100145ef4
- (void)loadClassroom;	// IMP=0x0000000100145d38
- (void)loadODisk;	// IMP=0x0000000100145a50
- (void)loadManaged;	// IMP=0x000000010014593c
- (void)loadConnected;	// IMP=0x00000001001457a4
- (void)loadSharePoints;	// IMP=0x00000001001457a0
- (_Bool)onlySupportsADisk:(id)arg1;	// IMP=0x0000000100145704
- (void)loadWorkgroups;	// IMP=0x00000001001455d0
- (void)loadDomains;	// IMP=0x00000001001454b8
- (void)loadWindows;	// IMP=0x00000001001451f0
- (void)loadBonjour;	// IMP=0x0000000100144ea0
@property(copy) NSDictionary *options;
@property long long mode;
- (void)sidebarPrefsChanged:(id)arg1;	// IMP=0x0000000100144dbc
- (void)managedChanged:(id)arg1;	// IMP=0x0000000100144d84
- (void)connectedChanged:(id)arg1;	// IMP=0x0000000100144d4c
- (void)sharePointBrowser:(id)arg1 nodesDidChangeWithError:(int)arg2;	// IMP=0x0000000100144ca8
- (void)workgroupsChanged:(id)arg1;	// IMP=0x0000000100144c70
- (void)domainsChanged:(id)arg1;	// IMP=0x0000000100144c38
- (void)serversChanged:(id)arg1;	// IMP=0x0000000100144b74
- (void)classroomChanged:(id)arg1;	// IMP=0x0000000100144b68
- (void)takeActionOnServerChanged:(id)arg1 neighborhood:(id)arg2;	// IMP=0x0000000100144a2c
- (void)notifyClientAboutWorkgroups;	// IMP=0x0000000100144688
- (void)setConnectionState:(int)arg1;	// IMP=0x000000010014467c
- (void)setUserName:(id)arg1;	// IMP=0x0000000100144670
- (void)setError:(int)arg1;	// IMP=0x0000000100144668
- (void)notifyClient;	// IMP=0x0000000100144658
- (id)coalescedNodesForNodesCache:(id)arg1;	// IMP=0x00000001001439a8
- (void)dealloc;	// IMP=0x0000000100143950
- (id)initWithNode:(struct __SFNode *)arg1 protocol:(id)arg2 flags:(unsigned long long)arg3 kind:(id)arg4;	// IMP=0x0000000100143788

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

