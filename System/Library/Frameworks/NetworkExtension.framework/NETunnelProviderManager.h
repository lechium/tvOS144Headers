/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEVPNManager.h>

@class NSArray;

@interface NETunnelProviderManager : NEVPNManager {

	NSArray* _safariDomains;
	NSArray* _mailDomains;
	NSArray* _calendarDomains;
	NSArray* _contactsDomains;
	NSArray* _appRules;
	NSArray* _excludedDomains;
	NSArray* _associatedDomains;

}

@property (readonly) long long routingMethod; 
@property (copy) NSArray * safariDomains;                  //@synthesize safariDomains=_safariDomains - In the implementation block
@property (copy) NSArray * mailDomains;                    //@synthesize mailDomains=_mailDomains - In the implementation block
@property (copy) NSArray * calendarDomains;                //@synthesize calendarDomains=_calendarDomains - In the implementation block
@property (copy) NSArray * contactsDomains;                //@synthesize contactsDomains=_contactsDomains - In the implementation block
@property (copy) NSArray * appRules;                       //@synthesize appRules=_appRules - In the implementation block
@property (copy) NSArray * excludedDomains;                //@synthesize excludedDomains=_excludedDomains - In the implementation block
@property (copy) NSArray * associatedDomains;              //@synthesize associatedDomains=_associatedDomains - In the implementation block
+(id)copyDesignatedRequirementForProvider:(id*)arg1 extensionPoint:(id)arg2 appPermission:(long long*)arg3 ;
+(void)loadAllFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)forPerAppVPN;
+(long long)extensionPointToAppPermission:(id)arg1 ;
-(id)init;
-(NSArray *)mailDomains;
-(NSArray *)calendarDomains;
-(NSArray *)contactsDomains;
-(NSArray *)excludedDomains;
-(NSArray *)associatedDomains;
-(void)setSafariDomains:(NSArray *)arg1 ;
-(void)setMailDomains:(NSArray *)arg1 ;
-(void)setCalendarDomains:(NSArray *)arg1 ;
-(void)setContactsDomains:(NSArray *)arg1 ;
-(void)setExcludedDomains:(NSArray *)arg1 ;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isProtocolTypeValid:(long long)arg1 ;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSessionType:(int)arg1 tunnelType:(long long)arg2 ;
-(NSArray *)appRules;
-(void)setAppRules:(NSArray *)arg1 ;
-(long long)routingMethod;
-(void)loadAppRules;
-(id)copyAppRules;
-(NSArray *)safariDomains;
@end

