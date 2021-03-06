/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class CNContactStore, NSData, NSDictionary, NSMutableDictionary, CNContact, NSObject, NSArray;

@interface IMContactStore : NSObject {

	BOOL _batchFetchingForLaunchCompleted;
	CNContactStore* _contactStore;
	NSData* _changeHistoryToken;
	NSDictionary* _handleIDToCNIDMap;
	NSMutableDictionary* _CNIDToHandleIDsMap;
	NSMutableDictionary* _IDToCNContactMap;
	double _lastContactStoreSync;
	double _lastMeContactStoreSync;
	CNContact* _meContact;
	NSObject*<OS_dispatch_queue> _changeHistoryFetchQueue;
	NSArray* _CNIDsForBatchFetch;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                     //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSData * changeHistoryToken;                                       //@synthesize changeHistoryToken=_changeHistoryToken - In the implementation block
@property (nonatomic,retain) NSDictionary * handleIDToCNIDMap;                                  //@synthesize handleIDToCNIDMap=_handleIDToCNIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * CNIDToHandleIDsMap;                          //@synthesize CNIDToHandleIDsMap=_CNIDToHandleIDsMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * IDToCNContactMap;                            //@synthesize IDToCNContactMap=_IDToCNContactMap - In the implementation block
@property (assign,nonatomic) BOOL batchFetchingForLaunchCompleted;                              //@synthesize batchFetchingForLaunchCompleted=_batchFetchingForLaunchCompleted - In the implementation block
@property (assign,nonatomic) double lastContactStoreSync;                                       //@synthesize lastContactStoreSync=_lastContactStoreSync - In the implementation block
@property (assign,nonatomic) double lastMeContactStoreSync;                                     //@synthesize lastMeContactStoreSync=_lastMeContactStoreSync - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                             //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> changeHistoryFetchQueue;              //@synthesize changeHistoryFetchQueue=_changeHistoryFetchQueue - In the implementation block
@property (nonatomic,retain) NSArray * CNIDsForBatchFetch;                                      //@synthesize CNIDsForBatchFetch=_CNIDsForBatchFetch - In the implementation block
+(id)sharedInstance;
+(id)IDsFromCNContact:(id)arg1 ;
+(id)dialingForCurrentLocale;
+(BOOL)isCNContactAKnownContact:(id)arg1 ;
+(id)displayNameForContact:(id)arg1 ;
+(id)createMutableContactWithID:(id)arg1 ;
+(id)keysForCNContact;
+(Class)IMCNContactFetchRequestClass;
+(id)validateAndFilterIDsForContactsBatchFetch:(id)arg1 ;
+(id)validateAndCleanupID:(id)arg1 ;
+(id)predicateForID:(id)arg1 ;
+(id)dialingCodeForID:(id)arg1 ;
+(id)keysForMeContact;
+(id)mePredicate;
+(Class)IMCNChangeHistoryFetchRequestClass;
+(BOOL)shouldShowNickNames;
+(id)nickNameForCNContact:(id)arg1 ;
+(id)fullNameForCNContact:(id)arg1 ;
+(id)companyNameForCNContact:(id)arg1 ;
+(id)abbreviatedNameForCNContact:(id)arg1 ;
+(id)displayNameWithCNNickNameOrFullNameOrCompanyNameOrAbbreviatedForContact:(id)arg1 ;
+(id)displayNameWithPhoneNumberOrEmailForContact:(id)arg1 ;
+(id)_stringFromContact:(id)arg1 withStyle:(long long)arg2 ;
+(id)phoneticFirstNameForCNContact:(id)arg1 ;
+(id)firstNameForCNContact:(id)arg1 ;
+(Class)IMCNContactFormatterClass;
+(id)phoneNumbersForCNContact:(id)arg1 ;
+(id)emailsForCNContact:(id)arg1 ;
+(Class)IMCNMutableContactClass;
+(Class)IMCNLabeledValueClass;
+(Class)IMCNPhoneNumberClass;
+(id)kIMCNContactIdentifierKey;
+(id)kIMCNContactEmailAddressesKey;
+(id)kIMCNContactPhoneNumbersKey;
+(id)kIMCNContactLinkIdentifierKey;
+(id)kIMCNContactImageDataAvailableKey;
+(id)kIMCNContactImageDataKey;
+(id)kIMCNContactThumbnailImageDataKey;
+(id)kIMCNContactCropRectKey;
+(Class)IMCNMeCardSharingPickerViewControllerClass;
+(id)lastNameForCNContact:(id)arg1 ;
+(id)phoneticLastNameForCNContact:(id)arg1 ;
+(id)phoneticFullNameForCNContact:(id)arg1 ;
+(BOOL)shouldShowAbbreviatedNames;
+(id)createMutableContactWithMapURL:(id)arg1 andLocalizedLocationString:(id)arg2 ;
+(id)keysForNicknameHandling;
+(id)descriptionForCNContact:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)contactStoreChanged:(id)arg1 ;
-(void)meCardChanged:(id)arg1 ;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(void)handleDropEverythingEvent;
-(id)getContactForID:(id)arg1 ;
-(id)handleIDsForCNID:(id)arg1 ;
-(id)getAllKeysFromIDToCNContactMap;
-(void)replaceContact:(id)arg1 withID:(id)arg2 ;
-(void)replaceWithMutableContactForID:(id)arg1 ;
-(void)logDictionary:(id)arg1 ;
-(void)logDictionary:(id)arg1 inBatchesOfSize:(long long)arg2 ;
-(void)_logDictionaryInformation:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_logArray:(id)arg1 inBatchesOfSize:(long long)arg2 ;
-(id)getCurrentHistoryToken;
-(void)logCNContact:(id)arg1 ;
-(id)fetchCNContactForHandleWithID:(id)arg1 ;
-(void)logHandleIDs:(id)arg1 ;
-(void)logContactFetchRequestResults:(id)arg1 ;
-(void)logCurrentHistoryToken;
-(void)logCNContact:(id)arg1 andID:(id)arg2 ;
-(void)logHandleID:(id)arg1 ;
-(void)addEntriesToIDToCNContactMap:(id)arg1 ;
-(void)cacheBatchFetchResults:(id)arg1 handleIDsWithoutCNID:(id)arg2 ;
-(id)getIDToCNContactMap;
-(void)setChangeHistoryToken:(NSData *)arg1 ;
-(void)setBatchFetchingCompleted;
-(void)addContact:(id)arg1 withID:(id)arg2 ;
-(id)completedContact:(id)arg1 withKeys:(id)arg2 ;
-(id)fetchCNContactForHandleID:(id)arg1 withKeys:(id)arg2 ;
-(id)getHandleIDToCNIDMap;
-(void)generateCNIDToHandleIDMap;
-(id)getCNIDToHandleIDsMap;
-(NSDictionary *)handleIDToCNIDMap;
-(void)addIDToCNIDToHandleIDsMap:(id)arg1 withCNID:(id)arg2 ;
-(void)removeIDFromCNIDToHandleIDsMap:(id)arg1 withCNID:(id)arg2 ;
-(BOOL)isBatchFetchingForLaunchCompleted;
-(void)checkForContactStoreChanges;
-(void)resetMeCard;
-(id)fetchMeContactWithKeys:(id)arg1 ;
-(id)fetchMeContactWithKeys:(id)arg1 withError:(id*)arg2 ;
-(id)getContactStore;
-(void)fetchCNContactsForHandlesWithIDs:(id)arg1 isFinalBatch:(BOOL)arg2 ;
-(id)fetchCNContactWithIdentifier:(id)arg1 ;
-(void)setHandleIDToCNIDMap:(NSDictionary *)arg1 ;
-(BOOL)isIDAKnownContact:(id)arg1 ;
-(BOOL)isContactWithIDAlreadyFetched:(id)arg1 ;
-(void)removeContactWithID:(id)arg1 ;
-(NSData *)changeHistoryToken;
-(NSMutableDictionary *)CNIDToHandleIDsMap;
-(void)setCNIDToHandleIDsMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)IDToCNContactMap;
-(void)setIDToCNContactMap:(NSMutableDictionary *)arg1 ;
-(BOOL)batchFetchingForLaunchCompleted;
-(void)setBatchFetchingForLaunchCompleted:(BOOL)arg1 ;
-(double)lastContactStoreSync;
-(void)setLastContactStoreSync:(double)arg1 ;
-(double)lastMeContactStoreSync;
-(void)setLastMeContactStoreSync:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)changeHistoryFetchQueue;
-(void)setChangeHistoryFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)CNIDsForBatchFetch;
-(void)setCNIDsForBatchFetch:(NSArray *)arg1 ;
@end

