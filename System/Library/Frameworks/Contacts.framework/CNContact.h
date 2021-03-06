/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDateComponents, NSDate, NSData, CNActivityAlert, NSDictionary, CNContactKeyVector, NSSet;

@interface CNContact : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _internalIdentifier;
	int _iOSLegacyIdentifier;
	NSString* _namePrefix;
	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSString* _nameSuffix;
	NSString* _previousFamilyName;
	NSString* _nickname;
	NSString* _phoneticGivenName;
	NSString* _phoneticMiddleName;
	NSString* _phoneticFamilyName;
	NSString* _phoneticOrganizationName;
	NSString* _pronunciationGivenName;
	NSString* _pronunciationFamilyName;
	NSString* _sortingGivenName;
	NSString* _sortingFamilyName;
	NSString* _sectionForSortingByGivenName;
	NSString* _sectionForSortingByFamilyName;
	NSString* _organizationName;
	NSString* _departmentName;
	NSString* _jobTitle;
	NSDateComponents* _birthday;
	NSDateComponents* _nonGregorianBirthday;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _note;
	NSData* _imageData;
	CGRect _cropRect;
	NSData* _thumbnailImageData;
	NSData* _fullscreenImageData;
	NSData* _syncImageData;
	BOOL _imageDataAvailable;
	NSString* _linkIdentifier;
	BOOL _preferredForName;
	BOOL _preferredForImage;
	NSString* _phonemeData;
	long long _contactType;
	long long _displayNameOrder;
	NSArray* _phoneNumbers;
	NSArray* _emailAddresses;
	NSArray* _urlAddresses;
	NSArray* _dates;
	NSArray* _instantMessageAddresses;
	NSArray* _contactRelations;
	NSArray* _socialProfiles;
	NSArray* _postalAddresses;
	NSArray* _calendarURIs;
	NSString* _cardDAVUID;
	NSString* _externalIdentifier;
	NSData* _externalRepresentation;
	NSString* _externalModificationTag;
	NSString* _externalUUID;
	NSString* _externalImageURI;
	CNActivityAlert* _callAlert;
	CNActivityAlert* _textAlert;
	NSString* _storeIdentifier;
	NSDictionary* _storeInfo;
	CNContact* _snapshot;
	NSArray* _linkedContacts;
	NSString* _accountIdentifier;
	CNContactKeyVector* _availableKeyDescriptor;
	NSString* _mapsData;
	NSString* _searchIndex;
	NSString* _preferredLikenessSource;
	NSString* _preferredApplePersonaIdentifier;
	NSString* _preferredChannel;
	NSString* _ISOCountryCode;
	NSString* _downtimeWhitelist;
	NSString* _imageType;
	NSData* _imageHash;
	NSString* _cropRectID;
	NSData* _cropRectHash;

}

@property (copy,readonly) NSString * nameTitle; 
@property (copy,readonly) NSString * firstName; 
@property (copy,readonly) NSString * lastName; 
@property (copy,readonly) NSString * maidenName; 
@property (copy,readonly) NSString * phoneticFirstName; 
@property (copy,readonly) NSString * phoneticLastName; 
@property (copy,readonly) NSString * companyName; 
@property (nonatomic,copy,readonly) NSArray * relatedNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (nonatomic,copy,readonly) NSString * internalIdentifier;                                 //@synthesize internalIdentifier=_internalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * calendarURIs; 
@property (nonatomic,copy,readonly) NSString * cardDAVUID; 
@property (nonatomic,copy,readonly) NSDictionary * activityAlerts; 
@property (nonatomic,copy,readonly) NSString * storeIdentifier;                                    //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * storeInfo;                                      //@synthesize storeInfo=_storeInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchIndex; 
@property (nonatomic,copy,readonly) NSString * accountIdentifier;                                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) id<CNKeyDescriptor> availableKeyDescriptor; 
@property (nonatomic,readonly) NSSet * availableKeys; 
@property (nonatomic,readonly) CGRect cropRect; 
@property (nonatomic,copy,readonly) NSString * cropRectID;                                         //@synthesize cropRectID=_cropRectID - In the implementation block
@property (nonatomic,copy,readonly) NSData * cropRectHash;                                         //@synthesize cropRectHash=_cropRectHash - In the implementation block
@property (nonatomic,copy,readonly) CNActivityAlert * callAlert; 
@property (nonatomic,copy,readonly) CNActivityAlert * textAlert; 
@property (nonatomic,readonly) int iOSLegacyIdentifier; 
@property (nonatomic,copy,readonly) NSString * externalURI; 
@property (nonatomic,copy,readonly) NSString * externalIdentifier; 
@property (nonatomic,copy,readonly) NSData * externalRepresentation; 
@property (nonatomic,copy,readonly) NSString * externalModificationTag; 
@property (nonatomic,copy,readonly) NSString * externalUUID; 
@property (nonatomic,copy,readonly) NSString * externalImageURI; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * phoneticFullName; 
@property (nonatomic,copy,readonly) NSString * linkIdentifier; 
@property (nonatomic,copy,readonly) NSString * phonemeData; 
@property (nonatomic,copy,readonly) NSString * sortingGivenName;                                   //@synthesize sortingGivenName=_sortingGivenName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sortingFamilyName;                                  //@synthesize sortingFamilyName=_sortingFamilyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionForSortingByGivenName; 
@property (nonatomic,copy,readonly) NSString * sectionForSortingByFamilyName; 
@property (nonatomic,copy,readonly) NSString * phoneticCompanyName; 
@property (nonatomic,copy,readonly) NSString * pronunciationGivenName; 
@property (nonatomic,copy,readonly) NSString * pronunciationFamilyName; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long displayNameOrder;                                         //@synthesize displayNameOrder=_displayNameOrder - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringForIndexing; 
@property (getter=isPreferredForName,nonatomic,readonly) BOOL preferredForName; 
@property (getter=isPreferredForImage,nonatomic,readonly) BOOL preferredForImage; 
@property (nonatomic,copy,readonly) NSString * preferredLikenessSource; 
@property (nonatomic,copy,readonly) NSString * preferredApplePersonaIdentifier; 
@property (nonatomic,copy,readonly) NSString * preferredChannel;                                   //@synthesize preferredChannel=_preferredChannel - In the implementation block
@property (nonatomic,copy,readonly) NSString * downtimeWhitelist; 
@property (nonatomic,copy,readonly) NSString * imageType; 
@property (nonatomic,copy,readonly) NSData * imageHash; 
@property (getter=isUnified,nonatomic,readonly) BOOL unified; 
@property (nonatomic,readonly) BOOL hasBeenPersisted; 
@property (nonatomic,copy,readonly) NSArray * linkedContacts; 
@property (nonatomic,copy,readonly) NSArray * mainStoreLinkedContacts; 
@property (nonatomic,copy,readonly) NSString * mapsData; 
@property (nonatomic,copy,readonly) NSData * fullscreenImageData; 
@property (nonatomic,copy,readonly) NSData * syncImageData; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long contactType; 
@property (nonatomic,copy,readonly) NSString * namePrefix; 
@property (nonatomic,copy,readonly) NSString * givenName; 
@property (nonatomic,copy,readonly) NSString * middleName; 
@property (nonatomic,copy,readonly) NSString * familyName; 
@property (nonatomic,copy,readonly) NSString * previousFamilyName; 
@property (nonatomic,copy,readonly) NSString * nameSuffix; 
@property (nonatomic,copy,readonly) NSString * nickname; 
@property (nonatomic,copy,readonly) NSString * organizationName; 
@property (nonatomic,copy,readonly) NSString * departmentName; 
@property (nonatomic,copy,readonly) NSString * jobTitle; 
@property (nonatomic,copy,readonly) NSString * phoneticGivenName; 
@property (nonatomic,copy,readonly) NSString * phoneticMiddleName; 
@property (nonatomic,copy,readonly) NSString * phoneticFamilyName; 
@property (nonatomic,copy,readonly) NSString * phoneticOrganizationName; 
@property (nonatomic,copy,readonly) NSString * note; 
@property (nonatomic,copy,readonly) NSData * imageData; 
@property (nonatomic,copy,readonly) NSData * thumbnailImageData; 
@property (nonatomic,readonly) BOOL imageDataAvailable; 
@property (nonatomic,copy,readonly) NSArray * phoneNumbers; 
@property (nonatomic,copy,readonly) NSArray * emailAddresses; 
@property (nonatomic,copy,readonly) NSArray * postalAddresses; 
@property (nonatomic,copy,readonly) NSArray * urlAddresses; 
@property (nonatomic,copy,readonly) NSArray * contactRelations; 
@property (nonatomic,copy,readonly) NSArray * socialProfiles; 
@property (nonatomic,copy,readonly) NSArray * instantMessageAddresses; 
@property (nonatomic,copy,readonly) NSDateComponents * birthday; 
@property (nonatomic,copy,readonly) NSDateComponents * nonGregorianBirthday; 
@property (nonatomic,copy,readonly) NSArray * dates; 
+(BOOL)supportsSecureCoding;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)contact;
+(id)os_log;
+(id)predicateForContactsInGroupWithIdentifier:(id)arg1 ;
+(id)predicateForContactsInContainerWithIdentifier:(id)arg1 ;
+(id)predicateForContactsMatchingPreferredChannel:(id)arg1 limitOne:(BOOL)arg2 ;
+(id)predicateForMeContact;
+(id)predicateForContactsMatchingEmailAddress:(id)arg1 ;
+(id)predicateForContactsMatchingPhoneNumber:(id)arg1 ;
+(id)unifyContacts:(id)arg1 ;
+(id)predicateForContactsWithIdentifiers:(id)arg1 ;
+(id)makeIdentifier;
+(id)storeInfoFromCoder:(id)arg1 storeIdentifier:(id)arg2 key:(id)arg3 ;
+(id)identifierProvider;
+(id)makeIdentifierString;
+(id)predicateForContactsMatchingName:(id)arg1 ;
+(id)predicateForContactsMatchingName:(id)arg1 options:(unsigned long long)arg2 ;
+(id)predicateForContactsWithOrganizationName:(id)arg1 ;
+(id)predicateForContactMatchingEmailAddress:(id)arg1 ;
+(id)predicateForContactsMatchingEmailAddress:(id)arg1 groupIdentifiers:(id)arg2 limitToOneResult:(BOOL)arg3 ;
+(id)predicateForContactsMatchingPhoneNumber:(id)arg1 prefixHint:(id)arg2 groupIdentifiers:(id)arg3 limitToOneResult:(BOOL)arg4 ;
+(id)predicateForContactsMatchingHandleStrings:(id)arg1 ;
+(id)predicateForContactsMatchingHandleStrings:(id)arg1 inContainersWithIdentifiers:(id)arg2 ;
+(id)predicateForContactsMatchingPostalAddress:(id)arg1 ;
+(id)predicateForContactsLinkedToContactWithIdentifier:(id)arg1 ;
+(id)predicateForContactsLinkedToContact:(id)arg1 ;
+(id)predicateForContactsMatchingFullTextSearch:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3 ;
+(id)predicateForContactMatchingMapString:(id)arg1 ;
+(id)predicateForContactMatchingPhoneNumber:(id)arg1 ;
+(id)predicateForContactsMatchingPhoneNumber:(id)arg1 prefixHint:(id)arg2 ;
+(id)predicateForContactMatchingPhoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(id)predicateForPreferredNameInRange:(NSRange)arg1 ;
+(id)predicateForPreferredNameInContainersWithIdentifiers:(id)arg1 groupsWithIdentifiers:(id)arg2 ;
+(id)predicateForContactsMatchingString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4 ;
+(id)predicateForContactMatchingURLString:(id)arg1 ;
+(id)predicateForContactMatchingLabeledValueIdentifier:(id)arg1 ;
+(id)predicateForContactMatchingEKParticipantWithName:(id)arg1 emailAddress:(id)arg2 URL:(id)arg3 predicateDescription:(id)arg4 ;
+(id)predicateForLegacyIdentifier:(unsigned)arg1 ;
+(id)predicateForContactsMatchingSocialProfile:(id)arg1 ;
+(id)predicateForContactsMatchingInstantMessageAddress:(id)arg1 ;
+(id)predicateForContactsWithNonUnifiedIdentifiers:(id)arg1 ;
+(id)predicateForFaultFulfillmentForLegacyIdentifier:(unsigned)arg1 identifier:(id)arg2 ;
+(id)predicateForAllContacts;
+(id)contactWithIdentifier:(id)arg1 ;
+(id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(BOOL)arg3 ;
+(id)alwaysFetchedKeys;
+(id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 ;
+(id)contactPropertyKeyFromABPropertyID:(int)arg1 ;
+(int)abPropertyIDfromContactPropertyKey:(id)arg1 ;
+(id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(BOOL)arg3 ;
+(id)contactPropertyKeyFromPublicABPropertyID:(int)arg1 ;
+(int)publicABPropertyIDFromContactPropertyKey:(id)arg1 ;
+(id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 ;
+(id)localizedStringForKey:(id)arg1 ;
+(id)contactWithContact:(id)arg1 ;
+(void)you_used_a_property_that_you_didnt_request_when_you_fetched_the_contact;
+(void)freezeIfInstancetypeIsImmutable:(id)arg1 ;
+(id)descriptorWithKeyDescriptors:(id)arg1 description:(id)arg2 ;
+(id)emptyContact;
+(id)contactWithDisplayName:(id)arg1 handleStrings:(id)arg2 ;
+(id)_contactWithContact:(id)arg1 createNewInstance:(BOOL)arg2 propertyDescriptions:(id)arg3 ;
+(id)contactWithDisplayName:(id)arg1 emailOrPhoneNumber:(id)arg2 ;
+(id)newContactWithPropertyKeys:(id)arg1 withValuesFromContact:(id)arg2 ;
+(id)makeContactAndMergeValuesFromAvailableKeysInContact:(id)arg1 ;
+(id)descriptorForAllComparatorKeys;
+(id)descriptorForAllImageDataKeys;
+(id)descriptorForKeyDescriptors:(id)arg1 description:(id)arg2 ;
+(/*^block*/id)comparatorForNameSortOrder:(long long)arg1 ;
+(/*^block*/id)preferredImageComparator;
+(id)previewURLForContact:(id)arg1 ;
+(id)contactWithArchivedData:(id)arg1 error:(id*)arg2 ;
+(id)contactWithVCardData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)givenName;
-(NSDate *)creationDate;
-(NSString *)familyName;
-(NSString *)middleName;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(NSString *)nickname;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)hasChanges;
-(NSDate *)modificationDate;
-(NSData *)imageData;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)storeIdentifier;
-(NSString *)accountIdentifier;
-(id)snapshot;
-(NSString *)fullName;
-(NSString *)imageType;
-(NSArray *)phoneNumbers;
-(id)shortDebugDescription;
-(NSString *)internalIdentifier;
-(NSString *)mapsData;
-(NSArray *)emailAddresses;
-(NSArray *)instantMessageAddresses;
-(NSData *)thumbnailImageData;
-(NSString *)note;
-(NSString *)organizationName;
-(long long)contactType;
-(NSString *)phonemeData;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(NSString *)phoneticMiddleName;
-(BOOL)imageDataAvailable;
-(BOOL)isKeyAvailable:(id)arg1 ;
-(NSString *)departmentName;
-(NSString *)jobTitle;
-(NSArray *)postalAddresses;
-(NSArray *)urlAddresses;
-(NSArray *)contactRelations;
-(NSDateComponents *)birthday;
-(NSArray *)dates;
-(NSDateComponents *)nonGregorianBirthday;
-(NSString *)companyName;
-(NSString *)maidenName;
-(NSArray *)socialProfiles;
-(NSArray *)calendarURIs;
-(NSDictionary *)activityAlerts;
-(NSArray *)relatedNames;
-(NSString *)cardDAVUID;
-(NSString *)preferredLikenessSource;
-(NSString *)preferredApplePersonaIdentifier;
-(NSData *)imageHash;
-(NSString *)externalURI;
-(NSString *)externalModificationTag;
-(int)iOSLegacyIdentifier;
-(BOOL)isUnified;
-(NSArray *)linkedContacts;
-(NSString *)linkIdentifier;
-(NSString *)externalIdentifier;
-(NSDictionary *)storeInfo;
-(id)linkedContactsFromStoreWithIdentifier:(id)arg1 ;
-(BOOL)isEqualIgnoringIdentifiers:(id)arg1 ;
-(id<CNKeyDescriptor>)availableKeyDescriptor;
-(id)keyVector;
-(BOOL)hasBeenPersisted;
-(BOOL)areKeysAvailable:(id)arg1 ;
-(NSData *)externalRepresentation;
-(NSString *)externalUUID;
-(NSString *)externalImageURI;
-(NSString *)previousFamilyName;
-(NSString *)phoneticGivenName;
-(NSString *)phoneticFamilyName;
-(NSString *)phoneticOrganizationName;
-(NSString *)pronunciationGivenName;
-(NSString *)pronunciationFamilyName;
-(NSString *)sectionForSortingByGivenName;
-(NSString *)sectionForSortingByFamilyName;
-(CGRect)cropRect;
-(NSData *)fullscreenImageData;
-(NSData *)syncImageData;
-(BOOL)isPreferredForName;
-(BOOL)isPreferredForImage;
-(CNActivityAlert *)callAlert;
-(CNActivityAlert *)textAlert;
-(NSString *)preferredChannel;
-(NSString *)downtimeWhitelist;
-(long long)displayNameOrder;
-(id)initWithIdentifier:(id)arg1 availableKeyDescriptor:(id)arg2 ;
-(void*)detachedPersonWithError:(id*)arg1 ;
-(BOOL)overwritePerson:(void*)arg1 error:(id*)arg2 ;
-(void*)detachedPerson;
-(BOOL)overwritePerson:(void*)arg1 ;
-(BOOL)overwritePublicABPerson:(void*)arg1 ;
-(BOOL)updateNewPublicABPerson:(void*)arg1 inAddressBook:(void*)arg2 ;
-(id)selfOrMutableCopy;
-(void)assertKeyIsAvailable:(id)arg1 ;
-(id)copyWithSelfAsSnapshot;
-(NSString *)searchIndex;
-(BOOL)preferredForName;
-(BOOL)preferredForImage;
-(NSString *)cropRectID;
-(NSData *)cropRectHash;
-(id)diffToSnapshotAndReturnError:(id*)arg1 ;
-(NSArray *)mainStoreLinkedContacts;
-(id)copyWithPropertyKeys:(id)arg1 ;
-(id)areKeysAvailable:(id)arg1 useIgnorableKeys:(BOOL)arg2 findMissingKeys:(BOOL)arg3 ;
-(BOOL)areAllAvailableKeysEqualToContact:(id)arg1 ignoringIdentifiers:(BOOL)arg2 ;
-(BOOL)areAllPropertiesButContactIdentifierEqualToContact:(id)arg1 ;
-(BOOL)isProperty:(id)arg1 equalToOtherIgnoreIdentifiers:(id)arg2 ;
-(BOOL)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)arg1 ;
-(id)copyWithDistinctIdentifier;
-(void)assertKeysAreAvailable:(id)arg1 ;
-(NSSet *)availableKeys;
-(BOOL)isUnifiedWithContactWithIdentifier:(id)arg1 ;
-(NSString *)stringForIndexing;
-(NSString *)phoneticFullName;
-(NSString *)phoneticCompanyName;
-(id)linkedIdentifierMap;
-(NSString *)sortingGivenName;
-(NSString *)sortingFamilyName;
-(NSString *)nameTitle;
@end

