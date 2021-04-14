/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPN.h>

@class NSArray;

@interface NEVPNApp : NEVPN {

	BOOL _noRestriction;
	BOOL _restrictDomains;
	NSArray* _appRules;
	NSArray* _excludedDomains;

}

@property (copy) NSArray * appRules;                     //@synthesize appRules=_appRules - In the implementation block
@property (assign) BOOL noRestriction;                   //@synthesize noRestriction=_noRestriction - In the implementation block
@property (assign) BOOL restrictDomains;                 //@synthesize restrictDomains=_restrictDomains - In the implementation block
@property (copy) NSArray * excludedDomains;              //@synthesize excludedDomains=_excludedDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)excludedDomains;
-(void)setExcludedDomains:(NSArray *)arg1 ;
-(BOOL)restrictDomains;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(BOOL)noRestriction;
-(void)setNoRestriction:(BOOL)arg1 ;
-(BOOL)removeAppRuleByID:(id)arg1 ;
-(NSArray *)appRules;
-(void)setAppRules:(NSArray *)arg1 ;
-(void)setRestrictDomains:(BOOL)arg1 ;
-(id)copyAppRuleIDs;
-(id)copyAppRuleByID:(id)arg1 ;
-(id)copyUniqueSigningIdentifiers;
-(id)copyAppRuleBySigningIdentifier:(id)arg1 ;
-(BOOL)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1 ;
-(void)updateAppRulesForUID:(unsigned)arg1 ;
@end

