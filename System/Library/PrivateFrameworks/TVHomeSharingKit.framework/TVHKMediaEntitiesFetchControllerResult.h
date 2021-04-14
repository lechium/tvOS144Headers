/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVHKMediaEntitiesFetchRequest, TVHKMediaEntitiesFetchResponse, TVHKMediaEntitiesFetchResponseChangeSet;

@interface TVHKMediaEntitiesFetchControllerResult : NSObject {

	TVHKMediaEntitiesFetchRequest* _request;
	TVHKMediaEntitiesFetchResponse* _response;
	TVHKMediaEntitiesFetchResponseChangeSet* _changeSet;

}

@property (nonatomic,retain) TVHKMediaEntitiesFetchResponseChangeSet * changeSet;              //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) TVHKMediaEntitiesFetchRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) TVHKMediaEntitiesFetchResponse * response;                      //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaEntities; 
@property (nonatomic,readonly) BOOL hasChanges; 
+(id)new;
-(id)description;
-(id)init;
-(TVHKMediaEntitiesFetchRequest *)request;
-(TVHKMediaEntitiesFetchResponse *)response;
-(BOOL)hasChanges;
-(TVHKMediaEntitiesFetchResponseChangeSet *)changeSet;
-(void)setChangeSet:(TVHKMediaEntitiesFetchResponseChangeSet *)arg1 ;
-(id)initWithRequest:(id)arg1 response:(id)arg2 ;
-(BOOL)hasMediaEntities;
@end

