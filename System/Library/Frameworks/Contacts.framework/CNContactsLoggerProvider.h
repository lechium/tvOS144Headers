/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNContactsLoggerProvider.h>

@protocol CNContactsLoggerProvider <NSObject>
@property (nonatomic,readonly) id<CNContactsLogger> contactsLogger; 
@property (nonatomic,readonly) id<CNSpotlightIndexingLogger> spotlightIndexingLogger; 
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger; 
@property (nonatomic,readonly) id<CNFavoritesLogger> favoritesLogger; 
@property (nonatomic,readonly) id<CNAPITriageLogger> apiTriageLogger; 
@required
-(id<CNAPITriageLogger>)apiTriageLogger;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNFavoritesLogger>)favoritesLogger;

@end


@protocol CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger, CNFavoritesLogger, CNAPITriageLogger;
@class NSString;

@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider> {

	id<CNContactsLogger> _contactsLogger;
	id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
	id<CNRegulatoryLogger> _regulatoryLogger;
	id<CNFavoritesLogger> _favoritesLogger;
	id<CNAPITriageLogger> _apiTriageLogger;

}

@property (nonatomic,readonly) id<CNContactsLogger> contactsLogger; 
@property (nonatomic,readonly) id<CNSpotlightIndexingLogger> spotlightIndexingLogger; 
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger; 
@property (nonatomic,readonly) id<CNFavoritesLogger> favoritesLogger; 
@property (nonatomic,readonly) id<CNAPITriageLogger> apiTriageLogger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProvider;
-(id<CNAPITriageLogger>)apiTriageLogger;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNFavoritesLogger>)favoritesLogger;
@end

