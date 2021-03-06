/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSDate, NSString;

@interface SAHomeCommunicationAnnouncement : SADomainObject <SABackgroundContextObject>

@property (nonatomic,copy) NSDate * datePlaybackFinished; 
@property (nonatomic,copy) NSDate * datePlaybackStarted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)datePlaybackFinished;
-(void)setDatePlaybackFinished:(NSDate *)arg1 ;
-(NSDate *)datePlaybackStarted;
-(void)setDatePlaybackStarted:(NSDate *)arg1 ;
@end

