//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICDLoggable-Protocol.h"

@class CloudLibraryConnection, ICConnectionConfiguration, ML3MusicLibrary, NSString;

@interface JaliscoImporter : NSObject <ICDLoggable>
{
    _Bool _isCancelled;	// 8 = 0x8
    float _progress;	// 12 = 0xc
    CloudLibraryConnection *_connection;	// 16 = 0x10
    ICConnectionConfiguration *_configuration;	// 24 = 0x18
    ML3MusicLibrary *_musicLibrary;	// 32 = 0x20
}

+ (id)oversizeLogCategory;	// IMP=0x000000010002f8c4
+ (id)logCategory;	// IMP=0x000000010002f798
- (void).cxx_destruct;	// IMP=0x00000001000305a0
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) CloudLibraryConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
- (void)importTracksUpToRevision:(unsigned int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002fbb8
- (void)cancel;	// IMP=0x000000010002fbac
- (void)clearNeedsUpdateForTokens;	// IMP=0x000000010002fba8
- (_Bool)needsUpdateForTokens;	// IMP=0x000000010002fba0
- (_Bool)includePreorders;	// IMP=0x000000010002fb98
- (_Bool)includeHiddenItems;	// IMP=0x000000010002fb90
- (_Bool)includeFlavors;	// IMP=0x000000010002fb88
- (unsigned int)onDiskRevision;	// IMP=0x000000010002fb80
- (id)updateLibraryFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 withResponse:(id)arg3;	// IMP=0x000000010002fb78
- (id)purchaseTokens;	// IMP=0x000000010002fb70
- (id)metadataKeys;	// IMP=0x000000010002fb68
- (id)queryFilter;	// IMP=0x000000010002fb60
- (void)setProgress:(float)arg1;	// IMP=0x000000010002fb58
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010002f9f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

