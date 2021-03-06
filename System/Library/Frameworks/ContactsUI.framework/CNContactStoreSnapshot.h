/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <ContactsUI/ContactsUI-Structs.h>
@class NSMapTable, NSObject, NSArray, CNContactMatchSummarizer, NSMutableAttributedString, CNContactStoreDataSource, CNContactStoreFilter, NSMutableDictionary, NSMutableArray;

@interface CNContactStoreSnapshot : NSObject {

	unsigned long long _contactsCount;
	NSMapTable* _contactsCache;
	NSObject*<OS_dispatch_semaphore> _cacheAccessSemaphore;
	NSRange _currentlyLoadingBackgroundRange;
	NSArray* _sections;
	NSArray* _indexSections;
	CNContactMatchSummarizer* _summarizer;
	NSMutableAttributedString* _emptyExcerptInstanceMarker;
	unsigned long long _lastRequestedIndex;
	CNContactStoreDataSource* _dataSource;
	CNContactStoreFilter* _filter;
	NSMutableDictionary* _contactMatchInfos;
	NSMapTable* _identifiersToIndexPath;
	NSMutableArray* _batchContactIdentifiers;

}

@property (assign,nonatomic,__weak) CNContactStoreDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) CNContactStoreFilter * filter;                             //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSMutableDictionary * contactMatchInfos;                 //@synthesize contactMatchInfos=_contactMatchInfos - In the implementation block
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (nonatomic,readonly) NSMapTable * identifiersToIndexPath;                     //@synthesize identifiersToIndexPath=_identifiersToIndexPath - In the implementation block
@property (nonatomic,readonly) NSMutableArray * batchContactIdentifiers;                //@synthesize batchContactIdentifiers=_batchContactIdentifiers - In the implementation block
-(id)init;
-(CNContactStoreFilter *)filter;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(NSArray *)sections;
-(CNContactStoreDataSource *)dataSource;
-(void)setDataSource:(CNContactStoreDataSource *)arg1 ;
-(NSArray *)indexSections;
-(NSArray *)contacts;
-(id)_keysToFetch;
-(NSMutableDictionary *)contactMatchInfos;
-(void)_loadAllContacts;
-(void)_loadContactsInRange:(NSRange)arg1 inBackground:(BOOL)arg2 ;
-(void)_generateExcerptsInRange:(NSRange)arg1 ;
-(unsigned long long)countOf_contacts;
-(id)objectIn_contactsAtIndex:(unsigned long long)arg1 ;
-(void)prepareEnoughContacts;
-(void)prepareAllContacts;
-(NSMapTable *)identifiersToIndexPath;
-(NSMutableArray *)batchContactIdentifiers;
@end

