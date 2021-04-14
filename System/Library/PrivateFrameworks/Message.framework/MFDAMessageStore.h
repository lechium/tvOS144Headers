/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/Message-Structs.h>
#import <Message/MFLibraryStore.h>

@class DAFolder;

@interface MFDAMessageStore : MFLibraryStore {

	DAFolder* _DAFolder;
	BOOL _backedByVirtualAllSearchMailbox;

}

@property (assign,nonatomic) BOOL backedByVirtualAllSearchMailbox;              //@synthesize backedByVirtualAllSearchMailbox=_backedByVirtualAllSearchMailbox - In the implementation block
-(BOOL)bodyFetchRequiresNetworkActivity;
-(BOOL)messageCanBeTriaged:(id)arg1 ;
-(id)defaultAlternativeForPart:(id)arg1 ;
-(id)bestAlternativeForPart:(id)arg1 ;
-(id)additionalHeadersForReplyOfMessage:(id)arg1 ;
-(id)additionalHeadersForForwardOfMessage:(id)arg1 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(id)_downloadHeadersForMessages:(id)arg1 ;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1 ;
-(BOOL)hasMoreFetchableMessages;
-(unsigned long long)fetchWindow;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(BOOL)shouldGrowFetchWindow;
-(unsigned long long)growFetchWindow;
-(void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2 ;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)arg1 limit:(unsigned)arg2 ;
-(BOOL)canFetchSearchResults;
-(long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned)arg3 error:(id*)arg4 ;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2 ;
-(BOOL)allowsAppend;
-(id)messageForRemoteID:(id)arg1 ;
-(id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2 ;
-(id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(BOOL)shouldDownloadBodyDataForMessage:(id)arg1 ;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(BOOL)shouldSetSummaryForMessage:(id)arg1 ;
-(BOOL)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(BOOL*)arg3 consumer:(id)arg4 ;
-(id)_folderIDForFetching;
-(BOOL)backedByVirtualAllSearchMailbox;
-(void)_remoteIDsMatchingSearchText:(id)arg1 predicate:(id)arg2 limit:(unsigned)arg3 filterByDate:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_messageIsSearchResultWithBogusRemoteId:(id)arg1 ;
-(void)issueFlagUpdates:(id)arg1 forMessages:(id)arg2 ;
-(id)_fetchBodyDataForSearchResult:(id)arg1 folderID:(id)arg2 format:(int)arg3 streamConsumer:(id)arg4 ;
-(id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4 ;
-(id)_additionalHeadersForAction:(int)arg1 ofMessage:(id)arg2 ;
-(void)setServerFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setBackedByVirtualAllSearchMailbox:(BOOL)arg1 ;
@end

