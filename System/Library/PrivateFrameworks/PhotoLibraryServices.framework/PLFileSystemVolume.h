/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL, NSString, NSSet;

@interface PLFileSystemVolume : PLManagedObject {

	NSURL* _url;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * volumeUuidString; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,readonly) BOOL isOffline; 
@property (nonatomic,retain) NSSet * resources; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)entityName;
+(id)volumeForURL:(id)arg1 context:(id)arg2 ;
+(id)volumeForVolumeUUID:(id)arg1 context:(id)arg2 ;
+(id)volumeForObjectUUID:(id)arg1 context:(id)arg2 ;
+(id)predictedURLForVolumeName:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)didTurnIntoFault;
-(void)awakeFromInsert;
-(BOOL)isOffline;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)unregisterWithVolumeManager;
-(void)_registerWithVolumeManager;
-(void)_unregisterWithVolumeManager;
-(id)predictedURL;
@end
