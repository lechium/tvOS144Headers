//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVHListView, TVHMediaEntitiesDataSource, TVPPlayer;

@interface TVHNowPlayingBarsListViewCellController : NSObject
{
    _Bool _monitoringPlayer;	// 8 = 0x8
    TVHListView *_listView;	// 16 = 0x10
    TVHMediaEntitiesDataSource *_dataSource;	// 24 = 0x18
    TVPPlayer *_player;	// 32 = 0x20
}

+ (id)new;	// IMP=0x000000010002231c
- (void).cxx_destruct;	// IMP=0x0000000100022c74
@property(nonatomic) _Bool monitoringPlayer; // @synthesize monitoringPlayer=_monitoringPlayer;
@property(readonly, nonatomic) TVPPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) TVHMediaEntitiesDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) TVHListView *listView; // @synthesize listView=_listView;
- (void)_updateVisibleListViewCells;	// IMP=0x0000000100022a20
- (unsigned long long)_nowPlayingBarsStateForListItemIdentifier:(id)arg1 withCurrentMediaItem:(id)arg2;	// IMP=0x000000010002288c
- (id)_currentMediaItem;	// IMP=0x00000001000227f0
- (void)_stopMonitoringPlayer;	// IMP=0x0000000100022734
- (void)_startMonitoringPlayer;	// IMP=0x0000000100022668
- (void)_handleCurrentPlaybackMediaItemDidChangeNotification:(id)arg1;	// IMP=0x000000010002265c
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100022650
- (unsigned long long)nowPlayingBarsStateForListItemIdentifier:(id)arg1;	// IMP=0x000000010002256c
- (void)dealloc;	// IMP=0x00000001000224b0
- (id)initWithListView:(id)arg1 dataSource:(id)arg2 player:(id)arg3;	// IMP=0x00000001000223e0
- (id)init;	// IMP=0x0000000100022358

@end

