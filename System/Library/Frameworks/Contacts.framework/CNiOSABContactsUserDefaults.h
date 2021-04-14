/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNContactsUserDefaults.h>

@class NSMutableDictionary, NSCache, CNiOSABContactsUserDefaultsABWrapper;

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults {

	NSMutableDictionary* _observerCountPerKey;
	NSCache* _valueCache;
	CNiOSABContactsUserDefaultsABWrapper* _abWrapper;

}

@property (nonatomic,retain) NSMutableDictionary * observerCountPerKey;                       //@synthesize observerCountPerKey=_observerCountPerKey - In the implementation block
@property (nonatomic,retain) NSCache * valueCache;                                            //@synthesize valueCache=_valueCache - In the implementation block
@property (nonatomic,readonly) CNiOSABContactsUserDefaultsABWrapper * abWrapper;              //@synthesize abWrapper=_abWrapper - In the implementation block
-(id)init;
-(void)dealloc;
-(id)countryCode;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(long long)shortNameFormat;
-(void)setShortNameFormat:(long long)arg1 ;
-(void)flushCache;
-(long long)sortOrder;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(NSCache *)valueCache;
-(long long)displayNameOrder;
-(long long)newContactDisplayNameOrder;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(BOOL)shortNameFormatPrefersNicknames;
-(id)filteredGroupAndContainerIDs;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
-(id)initWithABWrapper:(id)arg1 ;
-(NSMutableDictionary *)observerCountPerKey;
-(void)_registerObserverForKey:(id)arg1 ;
-(void)_unregisterObserverForKey:(id)arg1 ;
-(CNiOSABContactsUserDefaultsABWrapper *)abWrapper;
-(void)setObserverCountPerKey:(NSMutableDictionary *)arg1 ;
-(void)setValueCache:(NSCache *)arg1 ;
@end

