/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOPDBrowseCategory, GEOPDAutocompleteEntry, NSArray, NSData, NSString, GEOFeatureStyleAttributes, NSURL;

@interface GEOSearchCategory : NSObject <NSSecureCoding> {

	GEOPDBrowseCategory* _browseCategory;
	GEOPDAutocompleteEntry* _autocompleteEntry;
	NSArray* _subcategories;

}

@property (getter=_suggestionEntryMetadata,nonatomic,readonly) NSData * suggestionEntryMetadata; 
@property (getter=_autocompleteEntry,nonatomic,readonly) GEOPDAutocompleteEntry * autocompleteEntry;              //@synthesize autocompleteEntry=_autocompleteEntry - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * shortDisplayString; 
@property (nonatomic,readonly) NSString * popularTokenString; 
@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) NSArray * subcategories;                                                           //@synthesize subcategories=_subcategories - In the implementation block
@property (nonatomic,readonly) id<GEOVenueIdentifier> venueIdentifier; 
@property (nonatomic,readonly) int displayMode; 
@property (nonatomic,readonly) int sortOrder; 
@property (nonatomic,readonly) int subCategoryType; 
@property (getter=isSubCategorySameAsTopLevel,nonatomic,readonly) BOOL subCategorySameAsTopLevel; 
@property (nonatomic,readonly) NSURL * mapsURL; 
+(BOOL)supportsSecureCoding;
+(id)categoryForURL:(id)arg1 ;
+(void)sendFeedbackForVisibleCategories:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)serverMetadata;
-(id)_suggestionEntryMetadata;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(id<GEOVenueIdentifier>)venueIdentifier;
-(int)sortOrder;
-(NSString *)displayString;
-(id)initWithBrowseCategory:(id)arg1 ;
-(id)initWithAutocompleteEntry:(id)arg1 ;
-(void)sendFeedback;
-(id)_autocompleteEntry;
-(NSURL *)mapsURL;
-(NSString *)shortDisplayString;
-(int)subCategoryType;
-(int)displayMode;
-(BOOL)isSubCategorySameAsTopLevel;
-(id)_browseCategory;
-(id)initWithStorage:(id)arg1 ;
-(NSString *)popularTokenString;
-(NSArray *)subcategories;
@end

