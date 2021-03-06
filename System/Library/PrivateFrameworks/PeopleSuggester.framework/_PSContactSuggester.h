/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class _PSContactResolver, NSXPCConnection, _CDInteractionStore, CNContactStore;

@interface _PSContactSuggester : NSObject {

	_PSContactResolver* contactResolver;
	NSXPCConnection* _connection;
	os_unfair_lock_s _lock;
	_CDInteractionStore* _interactionStore;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                       //@synthesize contactStore=_contactStore - In the implementation block
-(id)init;
-(void)dealloc;
-(_CDInteractionStore *)interactionStore;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)contactKeysToFetch;
-(id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsByIdentifiers:(id)arg2 lookBackDays:(long long)arg3 interactions:(id)arg4 modeAvocado:(BOOL)arg5 ;
-(id)contactSuggestionsWithMaxSuggestions:(long long)arg1 contactKeysTofetch:(id)arg2 interactionDomains:(id)arg3 referenceDate:(id)arg4 appleUsersOnly:(BOOL)arg5 ;
-(id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsWithIdentifiers:(id)arg2 ;
-(id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsByIdentifiers:(id)arg2 ;
-(id)contactSuggestionsWithMaxSuggestions:(long long)arg1 contactKeysTofetch:(id)arg2 interactionDomains:(id)arg3 appleUsersOnly:(BOOL)arg4 ;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
@end

