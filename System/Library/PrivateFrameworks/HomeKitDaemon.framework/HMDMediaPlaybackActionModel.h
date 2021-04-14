/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDActionModel.h>

@class NSSet, NSNumber, MPPlaybackArchive;

@interface HMDMediaPlaybackActionModel : HMDActionModel

@property (nonatomic,retain) NSSet * profiles; 
@property (nonatomic,retain) NSSet * accessories; 
@property (nonatomic,retain) NSSet * services; 
@property (nonatomic,retain) NSNumber * volume; 
@property (nonatomic,retain) MPPlaybackArchive * encodedPlaybackArchive; 
@property (nonatomic,retain) NSNumber * state; 
+(id)properties;
+(id)schemaHashRoot;
-(id)validate;
-(id)dependentUUIDs;
-(void)loadModelWithActionInformation:(id)arg1 ;
-(BOOL)validForStorage;
@end

