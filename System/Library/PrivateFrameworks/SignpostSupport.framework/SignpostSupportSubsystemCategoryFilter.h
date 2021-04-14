/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SignpostSupport/SignpostPredicateProducer.h>

@class NSPredicate, NSMutableDictionary;

@interface SignpostSupportSubsystemCategoryFilter : NSObject <SignpostPredicateProducer> {

	NSMutableDictionary* _subsystemsDict;

}

@property (nonatomic,readonly) NSMutableDictionary * subsystemsDict;                   //@synthesize subsystemsDict=_subsystemsDict - In the implementation block
@property (nonatomic,readonly) unsigned long long _compoundPredicateType; 
@property (nonatomic,readonly) BOOL _wantsNotSubsystem; 
@property (nonatomic,readonly) NSPredicate * predicateEquivalent; 
-(id)debugDescription;
-(void)addEntry:(id)arg1 ;
-(unsigned long long)_compoundPredicateType;
-(id)_initWithEntries:(id)arg1 ;
-(BOOL)passesSubsystem:(id)arg1 category:(id)arg2 ;
-(NSPredicate *)predicateEquivalent;
-(id)liveStreamingPredicate;
-(void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2 ;
-(NSMutableDictionary *)subsystemsDict;
-(id)_subpredicatesForSubsystemsWithIsSimplified:(BOOL)arg1 ;
-(BOOL)_wantsNotSubsystem;
-(id)_predicateEquivalentWithIsSimplified:(BOOL)arg1 ;
-(void)_fixupToSupportFramerateCalculation;
-(BOOL)matchesSubsystem:(id)arg1 category:(id)arg2 ;
-(void)addSubsystem:(id)arg1 category:(id)arg2 ;
@end

