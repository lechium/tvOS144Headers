//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CNXPCDataMapperService-Protocol.h"

@class CNAccessAuthorization, CNContactStore, CNContactsEnvironment, CNiOSAddressBookDataMapper, NSString, NSXPCConnection;
@protocol CNContactsLogger, CNScheduler;

@interface ContactsService : NSObject <CNXPCDataMapperService>
{
    CNContactStore *_contactStore;	// 8 = 0x8
    CNiOSAddressBookDataMapper *_dataMapper;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    id <CNScheduler> _workQueue;	// 32 = 0x20
    id <CNContactsLogger> _logger;	// 40 = 0x28
    CNContactsEnvironment *_environment;	// 48 = 0x30
    CNAccessAuthorization *_accessAuthorization;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010000abec
@property(readonly, nonatomic) CNAccessAuthorization *accessAuthorization; // @synthesize accessAuthorization=_accessAuthorization;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) CNiOSAddressBookDataMapper *dataMapper; // @synthesize dataMapper=_dataMapper;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)authorizedKeysForContactKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000aaf8
- (void)verifyIndexWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000aa78
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000aa6c
- (void)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a650
- (void)favoritesEntryDictionariesAtPath:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a330
- (_Bool)shouldNotReportFavoritesError:(id)arg1;	// IMP=0x000000010000a1d0
- (void)reportFavoritesIssue:(id)arg1;	// IMP=0x000000010000a168
- (void)currentHistoryAnchorWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009f48
- (void)currentHistoryTokenWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009d3c
- (void)executeChangeHistoryClearRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009af4
- (void)changeHistoryWithFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000098a8
- (void)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009614
- (void)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009380
- (void)userActivityForContact:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009080
- (void)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008d24
- (void)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000089b4
- (void)setMeContact:(id)arg1 forContainer:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000086dc
- (void)setMeContact:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008524
- (void)setDefaultAccountIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000082fc
- (void)defaultContainerIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000081f0
- (void)subgroupsOfGroupWithIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008080
- (void)groupsMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007f10
- (void)accountsMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007da0
- (void)policyForContainerWithIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007c30
- (void)serverSearchContainersMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007ac0
- (void)containersMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007950
- (void)executeSaveRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007750
- (void)meContactIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007554
- (void)identifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007420
- (void)progressiveContactsForFetchRequest:(id)arg1 progressHandler:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007058
- (void)encodedContactsAndCursorForFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006bf0
- (void)contactsForFetchRequest:(id)arg1 withMatchInfoReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000684c
- (void)sectionListOffsetsForSortOrder:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006620
- (void)contactCountForFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006368
- (void)unifiedContactCountWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006200
- (void)performWorkServicingSPI:(CDUnknownBlockType)arg1 authenticationFailureHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006154
- (void)performServicingRequestWork:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005d30
- (void)performWorkWithContactStore:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005c18
- (void)performAsyncWorkWithDataMapper:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005abc
- (void)performWorkWithDataMapper:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005998
- (_Bool)clientAllowedToUseSPI:(id *)arg1;	// IMP=0x0000000100005638
- (void)configureServiceWithOptions:(id)arg1;	// IMP=0x000000010000521c
- (id)initWithDataMapper:(id)arg1 workQueue:(id)arg2 environment:(id)arg3 connection:(id)arg4 accessAuthorization:(id)arg5;	// IMP=0x0000000100005074
- (id)initWithWorkQueue:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100004ed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

