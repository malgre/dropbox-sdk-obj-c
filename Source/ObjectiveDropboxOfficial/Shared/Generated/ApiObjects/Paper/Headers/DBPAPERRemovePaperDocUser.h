///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBPAPERRefPaperDoc.h"
#import "DBSerializableProtocol.h"

@class DBPAPERRemovePaperDocUser;
@class DBSHARINGMemberSelector;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RemovePaperDocUser` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERRemovePaperDocUser : DBPAPERRefPaperDoc <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// User which should be removed from the Paper doc. Specify only email address
/// or Dropbox account ID.
@property (nonatomic, readonly) DBSHARINGMemberSelector *member;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param docId The Paper doc ID.
/// @param member User which should be removed from the Paper doc. Specify only
/// email address or Dropbox account ID.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocId:(NSString *)docId member:(DBSHARINGMemberSelector *)member;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RemovePaperDocUser` struct.
///
@interface DBPAPERRemovePaperDocUserSerializer : NSObject

///
/// Serializes `DBPAPERRemovePaperDocUser` instances.
///
/// @param instance An instance of the `DBPAPERRemovePaperDocUser` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERRemovePaperDocUser` API object.
///
+ (nullable NSDictionary *)serialize:(DBPAPERRemovePaperDocUser *)instance;

///
/// Deserializes `DBPAPERRemovePaperDocUser` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERRemovePaperDocUser` API object.
///
/// @return An instantiation of the `DBPAPERRemovePaperDocUser` object.
///
+ (DBPAPERRemovePaperDocUser *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
