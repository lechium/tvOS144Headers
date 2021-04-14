/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppSupport/AppSupport-Structs.h>
@class CPSearchMatcher, NSRecursiveLock;

@interface ALCityManager : NSObject {

	sqlite3Ref _db;
	sqlite3Ref _localizedDb;
	CPSearchMatcher* _citySearchMatcher;
	NSRecursiveLock* _databaseAccessRecursiveLock;

}

@property (readonly) CPSearchMatcher * citySearchMatcher;              //@synthesize citySearchMatcher=_citySearchMatcher - In the implementation block
+(id)newCitiesByIdentifierMap:(id)arg1 ;
+(id)_localeDictionaryFromSQLRow:(char**)arg1 ;
+(id)sharedManager;
+(CFArrayRef)legacyCityForCity:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)citiesMatchingQualifier:(id)arg1 ;
-(void)localizeCities:(id)arg1 ;
-(id)citiesMatchingName:(id)arg1 localized:(BOOL)arg2 ;
-(id)citiesWithIdentifiers:(id)arg1 ;
-(id)_cityForClassicIdentifier:(id)arg1 commaSearchOptions:(unsigned long long)arg2 ;
-(id)cityForClassicIdentifier:(id)arg1 ;
-(id)citiesMatchingName:(id)arg1 ;
-(id)localeWithCode:(id)arg1 ;
-(id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2 ;
-(id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)citiesWithTimeZone:(id)arg1 ;
-(id)allCities;
-(id)bestCityForLegacyCity:(CFArrayRef)arg1 ;
-(id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)arg1 ;
-(id)allLocales;
-(id)defaultCitiesForLocaleCode:(id)arg1 ;
-(id)defaultCitiesShownInWorldClock;
-(id)defaultCityForTimeZone:(id)arg1 ;
-(id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(CPSearchMatcher *)citySearchMatcher;
@end
