/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPServerObjectDatabaseMetadataImportRequest.h>

@interface MPServerObjectDatabaseMediaKitImportRequest : MPServerObjectDatabaseMetadataImportRequest
+(id)_relationshipKeyForObject:(id)arg1 ;
+(id)_childKeyForParentType:(id)arg1 type:(id)arg2 ;
+(id)_unsupportedMediaKitTypes;
+(id)_unsupportedParentChildRelationships;
-(id)initWithPayload:(id)arg1 ;
-(BOOL)performWithDatabaseOperations:(id)arg1 augmentingPayload:(id*)arg2 error:(id*)arg3 ;
@end

