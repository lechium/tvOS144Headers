/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableSet;

@interface PGPersonContactMatchProperties : NSObject {

	BOOL _contactFaceprintMatch;
	NSString* _contactIdentifier;
	unsigned long long _numberOfWeakBirthdayMomentsAroundBirthdayDate;
	unsigned long long _numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
	unsigned long long _numberOfMomentsAtAddress;
	unsigned long long _numberOfMomentsAtMentionedAddress;
	unsigned long long _numberOfMomentsOverlappingWithCalendarEvents;
	unsigned long long _numberOfAppearancesInSharedAssets;
	unsigned long long _numberOfCMMSharedMomentsInMessageConversations;
	double _faceTimeFaceprintConfidence;
	NSMutableSet* _socialGroupDescriptions;
	NSMutableSet* _messageGroupDescriptions;
	double _socialGroupsOverlapScore;
	unsigned long long _numberOfMatchedRelationships;
	NSMutableSet* _matchedRelationships;
	unsigned long long _sexMatch;
	double _matchScore;
	double _birthdayScore;
	double _potentialBirthdayScore;
	double _addressScore;
	double _mentionedAddressScore;
	double _calendarScore;
	double _sharedAssetScore;
	double _sharedCMMScore;
	double _relationshipScore;
	double _scoreAfterMessagePenalty;

}

@property (assign,nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundBirthdayDate;                       //@synthesize numberOfWeakBirthdayMomentsAroundBirthdayDate=_numberOfWeakBirthdayMomentsAroundBirthdayDate - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;              //@synthesize numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate=_numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsAtAddress;                                            //@synthesize numberOfMomentsAtAddress=_numberOfMomentsAtAddress - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsAtMentionedAddress;                                   //@synthesize numberOfMomentsAtMentionedAddress=_numberOfMomentsAtMentionedAddress - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsOverlappingWithCalendarEvents;                        //@synthesize numberOfMomentsOverlappingWithCalendarEvents=_numberOfMomentsOverlappingWithCalendarEvents - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAppearancesInSharedAssets;                                   //@synthesize numberOfAppearancesInSharedAssets=_numberOfAppearancesInSharedAssets - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCMMSharedMomentsInMessageConversations;                      //@synthesize numberOfCMMSharedMomentsInMessageConversations=_numberOfCMMSharedMomentsInMessageConversations - In the implementation block
@property (assign,nonatomic) BOOL contactFaceprintMatch;                                                             //@synthesize contactFaceprintMatch=_contactFaceprintMatch - In the implementation block
@property (assign,nonatomic) double faceTimeFaceprintConfidence;                                                     //@synthesize faceTimeFaceprintConfidence=_faceTimeFaceprintConfidence - In the implementation block
@property (nonatomic,retain) NSMutableSet * socialGroupDescriptions;                                                 //@synthesize socialGroupDescriptions=_socialGroupDescriptions - In the implementation block
@property (nonatomic,retain) NSMutableSet * messageGroupDescriptions;                                                //@synthesize messageGroupDescriptions=_messageGroupDescriptions - In the implementation block
@property (assign,nonatomic) double socialGroupsOverlapScore;                                                        //@synthesize socialGroupsOverlapScore=_socialGroupsOverlapScore - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMatchedRelationships;                                        //@synthesize numberOfMatchedRelationships=_numberOfMatchedRelationships - In the implementation block
@property (nonatomic,retain) NSMutableSet * matchedRelationships;                                                    //@synthesize matchedRelationships=_matchedRelationships - In the implementation block
@property (assign,nonatomic) unsigned long long sexMatch;                                                            //@synthesize sexMatch=_sexMatch - In the implementation block
@property (assign,nonatomic) double birthdayScore;                                                                   //@synthesize birthdayScore=_birthdayScore - In the implementation block
@property (assign,nonatomic) double potentialBirthdayScore;                                                          //@synthesize potentialBirthdayScore=_potentialBirthdayScore - In the implementation block
@property (assign,nonatomic) double addressScore;                                                                    //@synthesize addressScore=_addressScore - In the implementation block
@property (assign,nonatomic) double mentionedAddressScore;                                                           //@synthesize mentionedAddressScore=_mentionedAddressScore - In the implementation block
@property (assign,nonatomic) double calendarScore;                                                                   //@synthesize calendarScore=_calendarScore - In the implementation block
@property (assign,nonatomic) double sharedAssetScore;                                                                //@synthesize sharedAssetScore=_sharedAssetScore - In the implementation block
@property (assign,nonatomic) double sharedCMMScore;                                                                  //@synthesize sharedCMMScore=_sharedCMMScore - In the implementation block
@property (assign,nonatomic) double relationshipScore;                                                               //@synthesize relationshipScore=_relationshipScore - In the implementation block
@property (assign,nonatomic) double scoreAfterMessagePenalty;                                                        //@synthesize scoreAfterMessagePenalty=_scoreAfterMessagePenalty - In the implementation block
@property (nonatomic,readonly) double matchScore;                                                                    //@synthesize matchScore=_matchScore - In the implementation block
@property (nonatomic,readonly) NSString * contactIdentifier;                                                         //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
-(id)description;
-(id)initWithContactIdentifier:(id)arg1 ;
-(NSString *)contactIdentifier;
-(double)matchScore;
-(double)relationshipScore;
-(void)registerBirthdayWithPeopleCount:(unsigned long long)arg1 ;
-(void)registerPotentialBirthdayWithPeopleCount:(unsigned long long)arg1 ;
-(void)registerMomentAtAddressWithPeopleCount:(unsigned long long)arg1 ;
-(void)registerMomentAtMentionedAddressWithPeopleCount:(unsigned long long)arg1 ;
-(void)registerSharedAssetAppearanceWithPeopleCount:(unsigned long long)arg1 ;
-(void)registerContactFaceprintMatch;
-(void)registerFacetimeFaceprintMatchConfidence:(double)arg1 ;
-(void)registerCalendarEventWithPeopleCount:(unsigned long long)arg1 ;
-(void)registerSocialGroupAndMessageGroupMatchScore:(double)arg1 debugSocialGroupsDescription:(id)arg2 debugMessageGroupsDescription:(id)arg3 ;
-(void)registerCMMWithPeopleCount:(unsigned long long)arg1 ;
-(void)registerMatchedRelationship:(unsigned long long)arg1 withPeopleCount:(unsigned long long)arg2 ;
-(void)registerBiologicalSexMatch:(unsigned long long)arg1 ;
-(void)registerMessageFrequencyPenaltyNewScore:(double)arg1 ;
-(id)_stringsForRelationshipMatch;
-(id)_socialGroupsDescription;
-(id)_messageGroupsDescription;
-(id)_relationshipsDescription;
-(id)edgeProperties;
-(void)setPersonContactMatchScore:(double)arg1 ;
-(unsigned long long)numberOfWeakBirthdayMomentsAroundBirthdayDate;
-(void)setNumberOfWeakBirthdayMomentsAroundBirthdayDate:(unsigned long long)arg1 ;
-(unsigned long long)numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
-(void)setNumberOfWeakBirthdayMomentsAroundPotentialBirthdayDate:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMomentsAtAddress;
-(void)setNumberOfMomentsAtAddress:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMomentsAtMentionedAddress;
-(void)setNumberOfMomentsAtMentionedAddress:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMomentsOverlappingWithCalendarEvents;
-(void)setNumberOfMomentsOverlappingWithCalendarEvents:(unsigned long long)arg1 ;
-(unsigned long long)numberOfAppearancesInSharedAssets;
-(void)setNumberOfAppearancesInSharedAssets:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCMMSharedMomentsInMessageConversations;
-(void)setNumberOfCMMSharedMomentsInMessageConversations:(unsigned long long)arg1 ;
-(BOOL)contactFaceprintMatch;
-(void)setContactFaceprintMatch:(BOOL)arg1 ;
-(double)faceTimeFaceprintConfidence;
-(void)setFaceTimeFaceprintConfidence:(double)arg1 ;
-(NSMutableSet *)socialGroupDescriptions;
-(void)setSocialGroupDescriptions:(NSMutableSet *)arg1 ;
-(NSMutableSet *)messageGroupDescriptions;
-(void)setMessageGroupDescriptions:(NSMutableSet *)arg1 ;
-(double)socialGroupsOverlapScore;
-(void)setSocialGroupsOverlapScore:(double)arg1 ;
-(unsigned long long)numberOfMatchedRelationships;
-(void)setNumberOfMatchedRelationships:(unsigned long long)arg1 ;
-(NSMutableSet *)matchedRelationships;
-(void)setMatchedRelationships:(NSMutableSet *)arg1 ;
-(unsigned long long)sexMatch;
-(void)setSexMatch:(unsigned long long)arg1 ;
-(double)birthdayScore;
-(void)setBirthdayScore:(double)arg1 ;
-(double)potentialBirthdayScore;
-(void)setPotentialBirthdayScore:(double)arg1 ;
-(double)addressScore;
-(void)setAddressScore:(double)arg1 ;
-(double)mentionedAddressScore;
-(void)setMentionedAddressScore:(double)arg1 ;
-(double)calendarScore;
-(void)setCalendarScore:(double)arg1 ;
-(double)sharedAssetScore;
-(void)setSharedAssetScore:(double)arg1 ;
-(double)sharedCMMScore;
-(void)setSharedCMMScore:(double)arg1 ;
-(void)setRelationshipScore:(double)arg1 ;
-(double)scoreAfterMessagePenalty;
-(void)setScoreAfterMessagePenalty:(double)arg1 ;
@end

