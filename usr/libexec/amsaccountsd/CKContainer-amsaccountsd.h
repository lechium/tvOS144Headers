//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKContainer.h>

#import "AMSDCloudDataContainer-Protocol.h"

@class NSString;
@protocol AMSDCloudDataDatabase;

@interface CKContainer (amsaccountsd) <AMSDCloudDataContainer>
- (id)_fetchShareMetadataForURL:(id)arg1 withToken:(id)arg2;	// IMP=0x0000000100031a10
- (id)_acceptShareWithShareMetadata:(id)arg1;	// IMP=0x0000000100031840
- (id)acceptShareURL:(id)arg1 withToken:(id)arg2;	// IMP=0x0000000100031748
@property(readonly, nonatomic) NSString *hashedDescription;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> sharedDatabase;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> publicDatabase;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> privateDatabase;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

