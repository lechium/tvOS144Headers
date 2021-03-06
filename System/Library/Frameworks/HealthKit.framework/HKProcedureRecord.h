/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMedicalCodingCollection, NSArray, HKMedicalDate, HKMedicalCoding, HKConcept, NSUUID, NSLocale, NSString, HKProcedureRecordType;

@interface HKProcedureRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	HKMedicalCodingCollection* _procedureCodingCollection;
	NSArray* _performers;
	HKMedicalDate* _executionStartDate;
	HKMedicalDate* _executionEndDate;
	BOOL _notPerformed;
	HKMedicalCoding* _statusCoding;
	HKMedicalCodingCollection* _categoryCodingCollection;
	NSArray* _reasonCodingCollections;
	NSArray* _reasonsNotPerformedCodingCollections;
	HKMedicalCodingCollection* _outcomeCodingCollection;
	NSArray* _complicationsCodingCollections;
	NSArray* _followUpsCodingCollections;
	NSArray* _bodySitesCodingCollections;
	HKConcept* _procedure;
	HKConcept* _status;
	HKConcept* _category;
	NSArray* _reason;
	NSArray* _reasonsNotPerformed;
	HKConcept* _outcome;
	NSArray* _complications;
	NSArray* _followUps;
	NSArray* _bodySites;

}

@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) HKProcedureRecordType * procedureRecordType; 
@property (copy,readonly) NSArray * bodySites; 
@property (copy,readonly) NSArray * bodySitesCodingCollections; 
@property (copy,readonly) HKConcept * category; 
@property (copy,readonly) HKMedicalCodingCollection * categoryCodingCollection; 
@property (copy,readonly) NSArray * complications; 
@property (copy,readonly) NSArray * complicationsCodingCollections; 
@property (copy,readonly) HKMedicalDate * executionEndDate; 
@property (copy,readonly) HKMedicalDate * executionStartDate; 
@property (copy,readonly) NSArray * followUps; 
@property (copy,readonly) NSArray * followUpsCodingCollections; 
@property (readonly) BOOL notPerformed; 
@property (copy,readonly) HKConcept * outcome; 
@property (copy,readonly) HKMedicalCodingCollection * outcomeCodingCollection; 
@property (copy,readonly) NSArray * performers; 
@property (copy,readonly) HKConcept * procedure; 
@property (copy,readonly) HKMedicalCodingCollection * procedureCodingCollection; 
@property (copy,readonly) NSArray * reason; 
@property (copy,readonly) NSArray * reasonCodingCollections; 
@property (copy,readonly) NSArray * reasonsNotPerformed; 
@property (copy,readonly) NSArray * reasonsNotPerformedCodingCollections; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 procedureCodingCollection:(id)arg13 performers:(id)arg14 executionStartDate:(id)arg15 executionEndDate:(id)arg16 notPerformed:(BOOL)arg17 statusCoding:(id)arg18 categoryCodingCollection:(id)arg19 reasonCodingCollections:(id)arg20 reasonsNotPerformedCodingCollections:(id)arg21 outcomeCodingCollection:(id)arg22 complicationsCodingCollections:(id)arg23 followUpsCodingCollections:(id)arg24 bodySitesCodingCollections:(id)arg25 ;
+(id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 procedureCodingCollection:(id)arg12 performers:(id)arg13 executionStartDate:(id)arg14 executionEndDate:(id)arg15 notPerformed:(BOOL)arg16 statusCoding:(id)arg17 categoryCodingCollection:(id)arg18 reasonCodingCollections:(id)arg19 reasonsNotPerformedCodingCollections:(id)arg20 outcomeCodingCollection:(id)arg21 complicationsCodingCollections:(id)arg22 followUpsCodingCollections:(id)arg23 bodySitesCodingCollections:(id)arg24 ;
+(id)_newProcedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 procedureCodingCollection:(id)arg13 performers:(id)arg14 executionStartDate:(id)arg15 executionEndDate:(id)arg16 notPerformed:(BOOL)arg17 statusCoding:(id)arg18 categoryCodingCollection:(id)arg19 reasonCodingCollections:(id)arg20 reasonsNotPerformedCodingCollections:(id)arg21 outcomeCodingCollection:(id)arg22 complicationsCodingCollections:(id)arg23 followUpsCodingCollections:(id)arg24 bodySitesCodingCollections:(id)arg25 config:(/*^block*/id)arg26 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)reason;
-(HKConcept *)category;
-(HKConcept *)status;
-(HKConcept *)outcome;
-(NSArray *)performers;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(HKMedicalCoding *)statusCoding;
-(id)statusCodingCollection;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
-(void)_setReason:(id)arg1 ;
-(id)medicalRecordCodings;
-(HKMedicalCodingCollection *)procedureCodingCollection;
-(NSArray *)bodySitesCodingCollections;
-(void)_setBodySites:(id)arg1 ;
-(HKProcedureRecordType *)procedureRecordType;
-(HKMedicalCodingCollection *)categoryCodingCollection;
-(NSArray *)reasonCodingCollections;
-(NSArray *)reasonsNotPerformedCodingCollections;
-(HKMedicalCodingCollection *)outcomeCodingCollection;
-(NSArray *)complicationsCodingCollections;
-(NSArray *)followUpsCodingCollections;
-(void)_setProcedure:(id)arg1 ;
-(void)_setCategory:(id)arg1 ;
-(void)_setReasonsNotPerformed:(id)arg1 ;
-(void)_setOutcome:(id)arg1 ;
-(void)_setComplications:(id)arg1 ;
-(void)_setFollowUps:(id)arg1 ;
-(void)_setPerformers:(id)arg1 ;
-(NSArray *)bodySites;
-(void)_setBodySitesCodingCollections:(id)arg1 ;
-(HKMedicalDate *)executionStartDate;
-(HKMedicalDate *)executionEndDate;
-(BOOL)notPerformed;
-(HKConcept *)procedure;
-(NSArray *)reasonsNotPerformed;
-(NSArray *)complications;
-(NSArray *)followUps;
-(void)_setProcedureCodingCollection:(id)arg1 ;
-(void)_setExecutionStartDate:(id)arg1 ;
-(void)_setExecutionEndDate:(id)arg1 ;
-(void)_setNotPerformed:(BOOL)arg1 ;
-(void)_setCategoryCodingCollection:(id)arg1 ;
-(void)_setReasonCodingCollections:(id)arg1 ;
-(void)_setReasonsNotPerformedCodingCollections:(id)arg1 ;
-(void)_setOutcomeCodingCollection:(id)arg1 ;
-(void)_setComplicationsCodingCollections:(id)arg1 ;
-(void)_setFollowUpsCodingCollections:(id)arg1 ;
@end

